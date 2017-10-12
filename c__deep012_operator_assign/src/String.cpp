#include "../include/String.hpp"
#include <iostream>
#include <string.h>
using namespace std;
String::String()
{
   str = NULL;
}
String::~String()
{
  if(str) 
     delete []str;
}
char* String::operator=(const char *s)
{
   if(str) 
     delete []str;
   if(s)
   {
      str = new char[strlen(s) + 1];
      strcpy(str,s);
   }
   else 
   {
      str = NULL; 
   }
   return str; 
}
void String::printValue()
{
   std::cout<<str<<std::endl;
}
const char * String::c_str()
{
   return str; 
}
String& String::operator=(const String &s)
{
  if(str == s.str) return *this;
  if(str) delete []str;
  if(s.str) {
     str = new char[strlen(s.str) + 1]; 
     strcpy(str,s.str);
  }
  else 
     str = NULL;
  return *this;
}


