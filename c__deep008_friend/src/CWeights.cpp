#include "../include/CWeights.hpp"
#include <iostream>
using namespace std;

CWeights::CWeights(int F_, int C_, int H_, int W_)
{
	F = F_;
	C = C_; 
	H = H_; 
	W = W_;
	cout<<"CWeights constructor called."<<endl;
}

void CWeights::printShape()
{
  cout<<"F:"<<F<<endl;
  cout<<"C:"<<C<<endl;
  cout<<"H:"<<H<<endl;
  cout<<"W:"<<W<<endl;
}

CWeights::~CWeights()
{
 cout<<"CWeights deconstructor called."<<endl;
}

void CWeights::modifyWeights(int F_, int C_, int H_, int W_)
{
   F = F_; 
   C = C_; 
   H = H_; 
   W = W_; 
   cout<<"modify weights."<<endl;
}
