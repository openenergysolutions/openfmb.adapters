#ifndef OPENFMB_ADAPTER_LOG_LOGARCHIVEVISITOR_H
#define OPENFMB_ADAPTER_LOG_LOGARCHIVEVISITOR_H

#include <adapter-api/config/IMessageVisitor.h>
#include <adapter-api/ConfigStrings.h>
#include <adapter-api/util/StringUtil.h>
#include <adapter-api/config/generated/MessageVisitors.h>
#include <adapter-api/config/MessageInformation.h>

#include "ITagFilter.h"

#include <vector>

namespace adapter
{
    namespace log
    {
        class LogArchiveVisitor : private IMessageVisitor
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
            void log_value(const std::string& field_name, const T& value)
            {
                const auto tag_name = this->get_tag_name(field_name);
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

            void handle(const std::string& field_name, bool value) override
            {
                this->log_value(field_name, value);
            }

            void handle(const std::string& field_name, int32_t value) override
            {
                this->log_value(field_name, value);
            }

            void handle(const std::string& field_name, uint32_t value) override
            {
                this->log_value(field_name, value);
            }

            void handle(const std::string& field_name, int64_t value) override
            {
                this->log_value(field_name, value);
            }

            void handle(const std::string& field_name, uint64_t value) override
            {
                this->log_value(field_name, value);
            }

            void handle(const std::string& field_name, float value) override
            {
                this->log_value(field_name, value);
            }

            void handle(const std::string& field_name, const std::string& value) override
            {
                this->log_value(field_name, value);
            }

            void handle(const std::string& field_name, int value,
                        const google::protobuf::EnumDescriptor& descriptor) override
            {
                const auto enum_value = descriptor.FindValueByNumber(value);
                if(enum_value)
                {
                    this->log_value(field_name, enum_value->name());
                }

            }

        private:

            std::string get_tag_name(const std::string& field_name) const
            {
                std::ostringstream oss;
                oss << this->profile_name;

                for(const auto& name : tag_name_stack)
                {
                    oss << '.' << name;
                }
                oss << field_name;

                return oss.str();
            }

            std::vector<std::string> tag_name_stack;

        };
    }
}

#endif
