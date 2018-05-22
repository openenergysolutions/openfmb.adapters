#ifndef OPENFMB_ADAPTER_LOG_LOGARCHIVEVISITOR_H
#define OPENFMB_ADAPTER_LOG_LOGARCHIVEVISITOR_H

#include <adapter-api/config/IArchiveVisitor.h>
#include <adapter-api/ConfigStrings.h>
#include <adapter-api/util/StringUtil.h>
#include <adapter-api/config/generated/ArchiveVisitors.h>
#include <adapter-api/config/MessageInformation.h>

#include "ITagFilter.h"

#include <vector>

namespace adapter
{
    namespace log
    {
        class LogArchiveVisitor : private IArchiveVisitor
        {
        public:

            template <class T>
            static void log(const T& profile, Logger logger, const ITagFilter& filter)
            {
                LogArchiveVisitor visitor(
                    std::move(logger),
                    T::descriptor()->name(),
                    get_conducting_equip(profile).namedobject().name(),
                    [&](const std::string & tag)
                {
                    return filter.matches(tag, get_conducting_equip(profile).mrid());
                }
                );

                visit(profile, visitor);
            }

        private:

            Logger logger;
            const std::string profile_name;
            const std::string device_name;
            const std::function<bool (std::string)> filter;

            LogArchiveVisitor(Logger logger, std::string profile_name, std::string device_name, std::function<bool (std::string)> filter) :
                logger(std::move(logger)),
                profile_name(std::move(profile_name)),
                device_name(std::move(device_name)),
                filter(filter)
            {}

            template <class T>
            void log_value(const std::string& tag_name, const T& value)
            {
                if(this->filter(tag_name))
                {
                    logger.info("{} : {} == {}", this->device_name, tag_name, value);
                }
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
                    this->log_value(
                        this->get_tag_name(field_name, ::adapter::keys::mag),
                        value.mag().f()
                    );
                }
            }

            void handle(const std::string& field_name, const commonmodule::CMV& value) override
            {
                if(value.cval().has_mag())
                {
                    this->log_value(
                        this->get_tag_name(field_name, ::adapter::keys::cVal, ::adapter::keys::mag),
                        value.cval().mag().f()
                    );
                }
                if(value.cval().has_ang())
                {
                    this->log_value(
                        this->get_tag_name(field_name, ::adapter::keys::cVal, ::adapter::keys::ang),
                        value.cval().ang().f()
                    );
                }
            }

            void handle(const std::string& field_name, const commonmodule::BCR& value) override
            {
                this->log_value(
                    this->get_tag_name(field_name, ::adapter::keys::actVal),
                    value.actval()
                );
            }

            void handle(const std::string& field_name, const commonmodule::StatusDPS& value) override
            {
                this->log_value(
                    this->get_tag_name(field_name, ::adapter::keys::stVal),
                    value.stval()
                );
            }

        private:

            template <class T, class... Args>
            std::string get_tag_name(const std::string& field_name, const T& t, Args... args) const
            {
                std::ostringstream oss;
                oss << this->profile_name;

                for(const auto& name : tag_name_stack)
                {
                    oss << '.' << name;
                }
                oss << field_name << '.' << strings::join_with_discriminator('.', t, args...);

                return oss.str();
            }

            std::vector<std::string> tag_name_stack;

        };
    }
}

#endif
