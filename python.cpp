#include <iostream>
#include <string>
#include <sstream>
using namespace std;

template <typename T>
string NumberToString (T Number)
{
  stringstream ss;
  ss << Number;
  return ss.str();
}

template <typename T>
T StringToNumber (const string &Text)//Text not by const reference so that the function can be used with a 
{                               //character array as argument
  stringstream ss(Text);
  T result;
  return ss >> result ? result : 0;
}

class Int
{
  public:
  Int(const string &value);
  Int add(const Int &other);
  string str();

  private:
  int value;
};

Int::Int(const string &value)
  : value(StringToNumber<int>(value))
{
}

Int Int::add(const Int &other)
{
  return Int(NumberToString<int>(value + other.value));
}

string Int::str()
{
  return NumberToString<int>(value);
}

int main()
{
  Int x = Int("1");
  cout << x.str() << endl;
  Int y = Int("2");
  Int z = x.add(y);
  cout << z.str() << endl;
}
