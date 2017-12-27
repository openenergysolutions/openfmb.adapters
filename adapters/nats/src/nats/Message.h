//
// Created by jadamcrain on 12/27/17.
//

#ifndef OPENFMB_ADAPTER_MESSAGE_H
#define OPENFMB_ADAPTER_MESSAGE_H

#include <google/protobuf/message_lite.h>

#include <memory>

class Message
{

public:

    Message() = delete;
    Message(const Message&) = delete;

    ~Message() = default;

    const std::string subject;
    const int data_length;
    const std::unique_ptr<uint8_t[]> data;

    Message(const std::string& subject, const google::protobuf::MessageLite& message) :
        subject(subject),
        data_length(message.ByteSize()),
        data(std::make_unique<uint8_t[]>(static_cast<size_t>(data_length)))
    {
        message.SerializeToArray(data.get(), data_length);
    }

};


#endif //OPENFMB_ADAPTER_MESSAGE_H
