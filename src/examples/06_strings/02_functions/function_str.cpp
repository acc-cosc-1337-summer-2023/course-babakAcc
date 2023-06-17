#include "function_str.h"

void string_value_param(std::string str)
{
    str = "Python";
}

void string_reference_param(std::string &str)
{
    str = "Python";
}

void string_const_reference_param(const std::string &str)
{
    // str = "Java"; can't modify const reference 
}