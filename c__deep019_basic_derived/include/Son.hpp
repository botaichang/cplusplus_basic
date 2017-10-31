#ifndef SON_HPP_
#define SON_HPP_
#include "Father.hpp"
class Son:public Father{
  void AccessFather()
  {
     nPublic = 1;
     //nPrivate = 1; //Error
     nProtected = 1;
  }
};
#endif 
