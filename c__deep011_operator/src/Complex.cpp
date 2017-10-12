#include "../include/Complex.hpp"
#include <iostream>
using namespace std;
Complex::Complex(double real_, double imag_)
{
  real = real_;
  imag = imag_;
  cout<<"constructor called."<<endl;
}
Complex Complex::operator+(const Complex& c)
{
  return Complex(real + c.real, imag + c.imag);
}
Complex Complex::operator+(double real_)
{
  return Complex(real + real_,imag);
}
Complex Complex::operator-(const Complex& c)
{
  return Complex(real - c.real, imag - c.imag);

}
Complex Complex::operator*(const Complex& c)
{
  return Complex(real * c.real, imag * c.imag);
}
Complex Complex::operator/(const Complex& c)
{
  return Complex(real / c.real, imag / c.imag);
}
void Complex::printValue()
{
  cout<<"real: "<<real<<endl;
  cout<<"imag: "<<imag<<endl;
}
void Complex::setValue(double real_, double imag_)
{
  real = real_; 
  imag = imag_;
}
Complex operator+(double r,const Complex & c)
{
  return Complex(r+c.real, c.imag);
}


