//=========================================
//1. operator= 
//2. deep copy and shallow copy
//=========================================

#include "include/String.hpp"
#include <iostream>
#include <string.h>

using namespace std;



int main()
{
  String s1;  
  s1 = "abcdef";

  cout<<s1.c_str()<<endl;

  String s2;
  s2 = "good luck";
  cout<<s2.c_str()<<endl;

  s1 = s2;  //deep copy and shallow copy 
  cout<<s1.c_str()<<endl;
  cout<<s2.c_str()<<endl;


  return 0;
  
}
