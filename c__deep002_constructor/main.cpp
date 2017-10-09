#include <iostream>
#include "include/Complex.hpp"
using namespace std;


void Func(CComplex A)
{
  A.print(); 
}
int main()
{
  CComplex c1(3,4); 
  int real, image;
  cout<< "input real"<<endl;
  cin>>real;
  cout<< "input image"<<endl;
  cin>>image;
  c1.set(real,image);
  c1.print();
  cout<<sizeof(c1)<<"Bytes"<<endl;
  cout <<"step1"<<endl;  //constructor 1 times , deconstructor 1 called 
  
  CComplex array1[2];
  CComplex array2[2] = {3,4}; // constructor 2 times, deconstructor 2 called  
  cout <<"step2"<<endl;
  
  CComplex array3[2] = {3}; //constructor 2 times, deconstructor 2 called 
  cout <<"step3"<<endl;
  
  CComplex *array4 = new CComplex[2]; //constructor 2 times, deconstructor 2 called  
  delete []array4;
  
  
  // copy constructor 
  CComplex c2(c1); // constructor 1 times , deconstructor 1 called
  CComplex c3 = c1;// constructor 1 times, deconstructor 1 called
  Func(c1); // cons 1 , decon 1 
  Func(c2); // cons 1 , decon 1
  Func(c3); // cons 1 , decon 1
  
  //type convert constructor
  float f= 1.4;
  CComplex c4(f); // cons 1 , decons 1
  c4.print();
  return 0; //cons 13 , decons 13 
  
}