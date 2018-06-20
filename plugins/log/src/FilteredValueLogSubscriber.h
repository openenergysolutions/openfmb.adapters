#ifndef OPENFMB_ADAPTER_FILTEREDVALUELOGSUBSCRIBER_H
#define OPENFMB_ADAPTER_FILTEREDVALUELOGSUBSCRIBER_H

#include <adapter-api/ISubscriptionHandler.h>
#include <adapter-api/Logger.h>
#include <adapter-api/config/MessageInformation.h>
#include <adapter-api/config/generated/MessageVisitors.h>

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

        class CachingVisitor : public IMessageVisitor
        {
            std::vector<std::string> tag_name_stack;

            std::map<std::string, value_getter_t> values;

            Logger logger;
            const bool log_all_values;

            std::string get_tag_name(const std::string& field_name) const
            {
                std::ostringstream oss;

                for(const auto& name : tag_name_stack)
                {
                    oss << name << ".";
                }

                oss << field_name;

                return oss.str();
            }

            void handle_value(const std::string& field_name, const value_getter_t& getter)
            {
                const auto tag_name = this->get_tag_name(field_name);

                if(this->log_all_values)
                {
                    logger.info("{} = {}", tag_name, getter(3));
                }


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

            CachingVisitor(const ITagList& list, Logger logger, bool log_all_values) :
                logger(std::move(logger)),
                log_all_values(log_all_values)
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

            void handle(const std::string& field_name, bool value) override
            {
                this->handle_value(field_name, getter(value));
            }

            void handle(const std::string& field_name, int32_t value) override
            {
                this->handle_value(field_name, getter(value));
            }

            void handle(const std::string& field_name, uint32_t value) override
            {
                this->handle_value(field_name, getter(value));
            }

            void handle(const std::string& field_name, int64_t value) override
            {
                this->handle_value(field_name, getter(value));
            }

            void handle(const std::string& field_name, uint64_t value) override
            {
                this->handle_value(field_name, getter(value));
            }

            void handle(const std::string& field_name, float value) override
            {
                this->handle_value(field_name, getter(value));
            }

            void handle(const std::string& field_name, const std::string& value) override
            {
                this->handle_value(field_name, getter(value));
            }

            void handle(const std::string& field_name, int value, const google::protobuf::EnumDescriptor& descriptor) override
            {
                const auto enum_value = descriptor.FindValueByNumber(value);
                if(enum_value)
                {
                    this->handle_value(field_name, getter(enum_value->name()));
                }
            }
        };

        template <class Proto>
        class FilteredValueLogSubscriptionHandler final : public ISubscriptionHandler<Proto>, private ITagList
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
            const bool log_all_values;
            std::ofstream log_file;

            std::mutex mutex;
            std::vector<TagPair> tags;

        public:

            FilteredValueLogSubscriptionHandler(Logger logger, const YAML::Node& config) :
                logger(std::move(logger)),
                name(yaml::require_string(config, ::adapter::keys::name)),
                print_alias(yaml::require(config, keys::print_alias).as<bool>()),
                log_all_values(yaml::require(config, keys::log_all_values).as<bool>()),
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

        private:

            bool matches(const Proto& message) const override
            {
                return get_conducting_equip(message).namedobject().name().value() == this->name;
            }

            void process(const Proto& message) override
            {
                CachingVisitor visitor(*this, this->logger, this->log_all_values);
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

    }
}

#endif
