#ifndef INT_H
#define INT_H

#include <string>

#include "object.h"

class Int : public Object {
  public:
    Int(const std::string &s);

    virtual Int* add(Int* other);
    virtual String* str();

  private:
    int value;
};

#endif  // INT_H
