#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_
class Complex{ 
public:
	double real; 
	double imag; 
	Complex(double real_, double imag_);
	Complex operator+(const Complex & c);
	Complex operator-(const Complex & c);
	Complex operator*(const Complex & c);
	void    setValue(double real_,double imag_);
        void    printValue();

};
#endif
