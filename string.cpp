#include "string.h";

String::String(const std::string &s)
  : value(s)
{
}

String* String::str()
{
  return this;
}

std::string String::get_value()
{
  return value;
}
