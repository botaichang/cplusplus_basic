
#include "include/CRectangle.hpp"
#include <iostream>

using namespace std;

void func(CRectangle A)
{
  A.printTotal();
}
int main()
{
  CRectangle c1(3,4);  
  c1.printTotal();
  CRectangle c2(5,4);  
  c2.printTotal();
  func(c2);
  CRectangle c3(6,7);
  return 0;
  
}
