#include "int.h"

#include "string.h"
#include "utility.h"

Int::Int(const std::string &s)
  : value(StringToNumber<int>(s))
{
}

Int* Int::add(Int* other)
{
  return new Int(NumberToString<int>(value + other->value));
}

String* Int::str()
{
  return new String(NumberToString<int>(value));
}

