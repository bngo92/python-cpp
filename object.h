#ifndef OBJECT_H
#define OBJECT_H

#include <string>

class String;

class Object {
  public:
    Object() {}
    virtual Object* add(const Object &other) {}
    virtual String* str() {}
};

#endif  // OBJECT_H
