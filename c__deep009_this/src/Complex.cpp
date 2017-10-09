
#include "../include/Complex.hpp"
#include <iostream>
using namespace std;

void CComplex::setValue(int real_, int img_)
{
	real = real_;
	img = img_;
}
void CComplex::printValue()
{
	cout<<"real: "<<real<<endl;
	cout<<"img : "<<img <<endl;
   	
}
