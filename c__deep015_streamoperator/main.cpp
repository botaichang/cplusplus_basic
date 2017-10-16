#include "include/Complex.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


//friend member 
ostream & operator<<(ostream &os, Complex & c)
{
	os<<c.real<<"+"<<c.imag<<"i";
	return os; 
}
//friend member 
istream & operator>>(istream &is, Complex & c)
{
	string s; 
	is>>s; 
	int pos = s.find("+",0);
	string sTmp = s.substr(0,pos);
	c.real = atof(sTmp.c_str());
	sTmp = s.substr(pos+1,s.length()-pos-2);
	c.imag = atof(sTmp.c_str());
	return is; 
}


int main()
{
 	Complex c(1,2); 
	int n; 
	std::cin>>c>>n; 
	std::cout<<c<<","<<n<<endl; 
	return 0;
}
