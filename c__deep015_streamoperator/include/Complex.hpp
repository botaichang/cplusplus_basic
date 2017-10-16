
#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std; 

class Complex
{
public:
   double real,imag; 
   Complex(double r,double i);
   friend ostream &operator <<( ostream &os, const Complex & c);
   friend istream &operator >>( istream &is, const Complex & c);
};

#endif 
