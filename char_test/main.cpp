#include <iostream>

#include <cstring>

using namespace std;


int main()
{
  char str1[] = "hello world";
  char str2[] = "hello world";

  char *str3 = "hello world";
  char *str4 = "hello world";

  if (str1 == str2)
     std::cout <<"string same"<<std::endl;
  else
     std::cout <<"string not same"<<std::endl;

  if (str3 == str4)
     std::cout <<"string same"<<std::endl;
  else
     std::cout <<"string not same"<<std::endl;

  return 0;

}

