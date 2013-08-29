#ifndef UTILITY_H
#define UTILITY_H

#include <string>
#include <sstream>

template <typename T>
std::string NumberToString(T Number)
{
  std::stringstream ss;
  ss << Number;
  return ss.str();
}

template <typename T>
T StringToNumber(const std::string &Text)//Text not by const reference so that the function can be used with a 
{                               //character array as argument
  std::stringstream ss(Text);
  T result;
  return ss >> result ? result : 0;
}

void print(Object* o);

#endif  // UTILITY_H
