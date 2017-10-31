#include "include/Father.hpp"
#include "include/Son.hpp"
//===================================
//派生类对象不能访问基类的私有成员，
//不能访问几类的保护成员．
//但是派生类的成员函数可以访问基类的保护成员．
//派生类的成员函数不能访问基类的私有成员．
//===================================

int main()
{
  Father f; 
  Son s; 
  f.nPublic = 1;
  //f.nPrivate = 1; //error
  //f.nProtected = 1;//error
  s.nPublic = 1;
  //s.nPrivate = 1; //error
  //s.nProtected = 1; //error
  return 0;
}
