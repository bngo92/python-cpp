#ifndef STRING_H
#define STRING_H

#include "object.h"

#include <string>

class String : public Object {
  public:
    String(const std::string& s);
    
    virtual String* str();
    std::string get_value();
    
  private:
    std::string value;
};

#endif  // STRING_H
