// 
//   _   _         ______    _ _ _   _             _ _ _
//  | \ | |       |  ____|  | (_) | (_)           | | | |
//  |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
//  | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
//  | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
//  |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                            __/ |
//                                           |___/
// 
//  This file is auto-generated. Do not edit manually
// 

#include "Type.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace goose {

const char Type::ignored[] = "ignored";
const char Type::structure[] = "structure";
const char Type::array[] = "array";
const char Type::boolean[] = "boolean";
const char Type::integer[] = "integer";
const char Type::floating[] = "floating";
const char Type::visible_string[] = "visible_string";
const char Type::mms_string[] = "mms_string";
const char Type::bitstring[] = "bitstring";
const char Type::generalized_time[] = "generalized_time";
const char Type::binary_time[] = "binary_time";
const char Type::utc_time[] = "utc_time";

const std::array<Type::Value, 12> Type::values =
{
    Type::Value::ignored,
    Type::Value::structure,
    Type::Value::array,
    Type::Value::boolean,
    Type::Value::integer,
    Type::Value::floating,
    Type::Value::visible_string,
    Type::Value::mms_string,
    Type::Value::bitstring,
    Type::Value::generalized_time,
    Type::Value::binary_time,
    Type::Value::utc_time,
};

std::string Type::to_string(Type::Value value)
{
    switch(value)
    {
        case(Value::ignored): return ignored;
        case(Value::structure): return structure;
        case(Value::array): return array;
        case(Value::boolean): return boolean;
        case(Value::integer): return integer;
        case(Value::floating): return floating;
        case(Value::visible_string): return visible_string;
        case(Value::mms_string): return mms_string;
        case(Value::bitstring): return bitstring;
        case(Value::generalized_time): return generalized_time;
        case(Value::binary_time): return binary_time;
        default: return utc_time;
    }
}

Type::Value Type::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {ignored, Value::ignored},
        {structure, Value::structure},
        {array, Value::array},
        {boolean, Value::boolean},
        {integer, Value::integer},
        {floating, Value::floating},
        {visible_string, Value::visible_string},
        {mms_string, Value::mms_string},
        {bitstring, Value::bitstring},
        {generalized_time, Value::generalized_time},
        {binary_time, Value::binary_time},
        {utc_time, Value::utc_time},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum Type");
    return elem->second;
}

} // end namespace goose

} // end namespace adapter
