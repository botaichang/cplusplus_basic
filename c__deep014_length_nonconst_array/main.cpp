#include "include/CArray.hpp"
#include <iostream>

using namespace std;

int main()
{
  CArray c(5); 
  c.push_back(4);
  c.push_back(3);
  c.push_back(2);
  c.push_back(1);
  c.push_back(9);
  for(int i = 0; i<5; i++)
    cout <<c[i]<<endl;
  
  return 0; 
  
}
