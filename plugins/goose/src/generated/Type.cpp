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

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

namespace goose {

const char Type::structure[] = "structure";
const char Type::array[] = "array";
const char Type::boolean[] = "boolean";
const char Type::integer[] = "integer";
const char Type::floating[] = "floating";

const std::array<Type::Value, 5> Type::values =
{
    Type::Value::structure,
    Type::Value::array,
    Type::Value::boolean,
    Type::Value::integer,
    Type::Value::floating,
};

std::string Type::to_string(Type::Value value)
{
    switch(value)
    {
        case(Value::structure): return structure;
        case(Value::array): return array;
        case(Value::boolean): return boolean;
        case(Value::integer): return integer;
        default: return floating;
    }
}

Type::Value Type::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {structure, Value::structure},
        {array, Value::array},
        {boolean, Value::boolean},
        {integer, Value::integer},
        {floating, Value::floating},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum Type");
    return elem->second;
}

} // end namespace goose

} // end namespace adapter
