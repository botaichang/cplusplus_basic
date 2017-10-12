#include "include/Complex.hpp"
#include <iostream>

Complex operator&(const Complex & a,const Complex &b)
{
	return Complex(a.real + b.real, a.imag + b.imag);
}

int main()
{
  Complex c1(3,4);  
  Complex c2(2,5);
  c1.printValue();
  c2.printValue();
  c1 = c1 + c2;
  c1.printValue();
  c1 = c1*c2;
  c1.printValue();

  c1 = c1 & c2;
  c1.printValue();


  c1.setValue(5,5);
  c1.printValue();
  
  c2.printValue();
  c1 = c1/c2; 
  c1.printValue();

  c1 = c1 + 5; 
  c1.printValue(); 
  
  c1 = 5 + c1; // operator+ must be reload as general function, and general function cannot access private member, so operator+ should be reload as friend member function.
  c1.printValue(); 
  return 0;
  
}
