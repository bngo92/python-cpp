#include <iostream>

#include "object.h"
#include "string.h"

void print(Object* o)
{
  std::cout << o->str()->get_value() << std::endl;
}

