
#ifndef OPENFMB_ADAPTER_BUFFER_H
#define OPENFMB_ADAPTER_BUFFER_H

#include <cstddef>
#include <memory>

namespace openfmb
{

    class Buffer
    {
    public:

        Buffer() = delete;
        Buffer(const Buffer&) = delete;

        explicit Buffer(size_t length) :
            length_(length),
            buffer(std::make_unique<uint8_t[]>(length))
        {}

        Buffer(Buffer&& other) :
            length_(other.length_),
            buffer(std::move(other.buffer))
        {

        }

        const uint8_t* data() const
        {
            return this->buffer.get();
        }

        uint8_t* data()
        {
            return this->buffer.get();
        }

        size_t length() const
        {
            return this->length_;
        }

    private:

        size_t length_;
        std::unique_ptr<uint8_t[]> buffer;
    };

}


#endif //OPENFMB_ADAPTER_BUFFER_H
