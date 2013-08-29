#include "int.h"
#include "string.h"
#include "utility.h"

int main()
{
  Int* x = new Int("1");
  print(x);
  Int* y = new Int("2");
  Int* z = x->add(y);
  print(z);

  String* s = new String("Hello World!");
  print(s);
}
