#ifndef OPENFMB_ADAPTER_FILTEREDLOGGERPROFILEHANDLER_H
#define OPENFMB_ADAPTER_FILTEREDLOGGERPROFILEHANDLER_H

#include <adapter-api/ISubscriber.h>
#include <adapter-api/Logger.h>
#include <adapter-api/IProfileHandler.h>
#include <adapter-api/config/MessageInformation.h>
#include <adapter-api/config/generated/ArchiveVisitors.h>

#include <fstream>
#include <iomanip>

namespace adapter
{
    namespace log
    {
        using tag_list_t = std::vector<std::string>;
        using value_getter_t = std::function<std::string (int)>;

        class ITagList
        {
        public:
            virtual size_t count() const = 0;
            virtual std::string get(size_t i) const = 0;
        };

        class CachingVisitor : public IArchiveVisitor
        {
            std::vector<std::string> tag_name_stack;

            std::map<std::string, value_getter_t> values;

            template <class T, class... Args>
            std::string get_tag_name(const std::string& field_name, const T& t, Args... args) const
            {
                std::ostringstream oss;

                for(const auto& name : tag_name_stack)
                {
                    oss << name << ".";
                }

                oss << field_name << '.' << strings::join_with_discriminator('.', t, args...);

                return oss.str();
            }

            void handle_value(const std::string& tag_name, const value_getter_t& getter)
            {
                const auto iter = this->values.find(tag_name);
                if(iter != this->values.end())
                {
                    this->values[tag_name] = getter;
                }
            }

            template <class T>
            value_getter_t getter(T value)
            {
                return [value](int precision)
                {
                    std::ostringstream oss;
                    oss << std::fixed << std::setprecision(precision) << value;
                    return oss.str();
                };
            }


        public:

            explicit CachingVisitor(const ITagList& list)
            {
                // initialize the value map
                for(size_t i = 0; i < list.count(); ++i)
                {
                    this->values[list.get(i)] = [](int precision)
                    {
                        return "?";
                    };
                }
            }

            std::string get_value(const std::string& tag_name, int precision) const
            {
                const auto value = this->values.find(tag_name);
                return value == this->values.end() ? "?" : value->second(precision);
            }

            void start_message_field(const std::string& field_name) override
            {
                this->tag_name_stack.emplace_back(field_name);
            }

            void end_message_field() override
            {
                this->tag_name_stack.pop_back();
            }

            void start_iteration(int i) override
            {
                std::ostringstream oss;
                oss << "[" << i << "]";
                this->tag_name_stack.emplace_back(oss.str());
            }

            void end_iteration() override
            {
                this->tag_name_stack.pop_back();
            }

            void handle(const std::string& field_name, const commonmodule::MV& value) override
            {
                if(value.has_mag())
                {
                    this->handle_value(
                        this->get_tag_name(field_name, ::adapter::keys::mag),
                        getter(value.mag().f())
                    );
                }
            }

            void handle(const std::string& field_name, const commonmodule::CMV& value) override
            {
                if(value.cval().has_mag())
                {
                    this->handle_value(
                        this->get_tag_name(field_name, ::adapter::keys::cVal, ::adapter::keys::mag),
                        getter(value.cval().mag().f())
                    );
                }
                if(value.cval().has_ang())
                {
                    this->handle_value(
                        this->get_tag_name(field_name, ::adapter::keys::cVal, ::adapter::keys::ang),
                        getter(value.cval().ang().f())
                    );
                }
            }

            void handle(const std::string& field_name, const commonmodule::BCR& value) override
            {
                this->handle_value(
                    this->get_tag_name(field_name, ::adapter::keys::actVal),
                    getter(value.actval())
                );
            }

            void handle(const std::string& field_name, const commonmodule::StatusDPS& value) override
            {
                this->handle_value(
                    this->get_tag_name(field_name, ::adapter::keys::stVal),
                    [s = commonmodule::DbPosKind_descriptor()->FindValueByNumber(value.stval())->name()](int precision)
                {
                    return s;
                }
                );
            }
        };

        template <class Proto>
        class FilteredLogSubscriber final : public ISubscriber<Proto>, private ITagList
        {
            struct TagPair
            {
                std::string name;
                std::string alias;
                int digits;
            };

            Logger logger;
            const std::string name;
            const bool print_alias;
            std::ofstream log_file;

            std::mutex mutex;
            std::vector<TagPair> tags;

        public:

            FilteredLogSubscriber(Logger logger, const YAML::Node& config) :
                logger(std::move(logger)),
                name(yaml::require_string(config, ::adapter::keys::name)),
                print_alias(yaml::require(config, keys::print_alias).as<bool>()),
                log_file(yaml::require_string(config, ::adapter::keys::path), std::ios_base::app | std::ios_base::out)
            {
                const auto values = yaml::require(config, keys::values);

                const auto add_tag = [&](const YAML::Node & node)
                {
                    this->tags.push_back(
                        TagPair
                    {
                        .name = yaml::require_string(node, keys::tag),
                        .alias = yaml::require_string(node, keys::alias),
                        .digits = yaml::require(node, keys::digits).as<int>()
                    }
                    );
                };

                yaml::foreach(values, add_tag);
            }

            virtual void receive(const Proto& message) override
            {
                if(get_conducting_equip(message).namedobject().name() != this->name)
                {
                    return;
                }

                CachingVisitor visitor(*this);
                visit(message, visitor);

                std::unique_lock<std::mutex> lock(this->mutex);

                for(auto& tag : this->tags)
                {
                    const auto value = visitor.get_value(tag.name, tag.digits);

                    if(this->print_alias)
                    {
                        this->log_file << tag.alias << ": " << value << " ";
                    }
                    else
                    {
                        this->log_file << value << " ";
                    }
                }

                this->log_file << std::endl;
            }

        private:
            size_t count() const override
            {
                return tags.size();
            }

            std::string get(size_t i) const override
            {
                return tags[i].name;
            }

        };

        class FilteredLoggerProfileHandler : public IProfileHandler
        {
            const YAML::Node config;
            const Logger logger;
            IMessageBus& bus;

            template <class T>
            void handle_any()
            {
                this->bus.subscribe(
                    std::make_shared<FilteredLogSubscriber<T>>(this->logger, this->config)
                );
            }

        public:

            FilteredLoggerProfileHandler(const YAML::Node& config, Logger logger, IMessageBus& bus) :
                config(config), logger(std::move(logger)), bus(bus)
            {}

        protected:

            void handle_resource_reading() override
            {
                this->handle_any<resourcemodule::ResourceReadingProfile>();
            }

            void handle_switch_reading() override
            {
                this->handle_any<switchmodule::SwitchReadingProfile>();
            }

            void handle_switch_status() override
            {
                this->handle_any<switchmodule::SwitchStatusProfile>();
            }
        };
    }
}

#endif
