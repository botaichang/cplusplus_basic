#include "include/Complex.hpp"
#include <iostream>
using namespace std;

struct str_Complex{
	int real; 
	int img; 
};
void setValue1(struct str_Complex *p, int real_, int img_ )
{
	p->real = real_;
	p->img = img_; 
}
void printValue(struct str_Complex *p )
{
	std::cout<<"real: "<<p->real<<endl;
	std::cout<<"img : "<<p->img <<endl;
	
}

int main()
{
	//==================
	//class  in c++
	//==================
	CComplex c1; 
	c1.setValue(3,4);
	c1.printValue();
	//==================
	//struct in c 
	//==================
	str_Complex c2;
	setValue1(&c2,5,6);
	printValue(&c2);
	return 0;
}
