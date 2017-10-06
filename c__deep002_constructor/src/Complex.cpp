#include "../include/Complex.hpp"

#include <iostream>

using namespace std;

int constructor_i = 0;
int deconstructor_j = 0;
CComplex::CComplex()//Constructor
{
   constructor_i += 1;
   cout<<"Constructor 1 called." <<endl;
   cout<<"constructor: "<<constructor_i<<" times called.[+++]"<<endl;
}
CComplex::~CComplex()//deconstructor
{
   deconstructor_j += 1;
   cout<<deconstructor_j<<"times called."<<endl;
   cout<<"deconstructor called."<<endl;
   cout<<"deconstructor: "<<deconstructor_j<<" times called.[---]"<<endl;
}

CComplex::CComplex(int n)//Constructor
{
  constructor_i += 1;
  x = n;
  cout<<"Constructor 2 called."<<endl;
   cout<<"constructor: "<<constructor_i<<" times called.[+++]"<<endl;
}
CComplex::CComplex(float n) //type convert
{
  constructor_i += 1;
  x = n;
  cout<<"type convert constructor called."<<endl;
   cout<<"constructor: "<<constructor_i<<" times called.[+++]"<<endl;
}
CComplex::CComplex(int real_, int image_)//constructor
{
   constructor_i += 1;
   real = real_;
   image = image_;
  cout<<"Constructor 3 called."<<endl;
   cout<<"constructor: "<<constructor_i<<" times called.[+++]"<<endl;
}

CComplex::CComplex(const CComplex & A) //copy constructor
{
   constructor_i += 1;
   real = A.real;
   image = A.image;
   cout<<"copy Constructor called."<<endl;
   cout<<"constructor: "<<constructor_i<<" times called.[+++]"<<endl;
}


void CComplex::set(int real_,int image_)
{
  real = real_; 
  image = image_;
}

void CComplex::print()
{
  cout<<"x :"<<x<<endl;
  cout<<"real part: "<<real<<endl;
  cout<<"image part "<<image<<endl;
}



