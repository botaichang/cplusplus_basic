
#include "../include/CRectangle.hpp"

#include <iostream>

int CRectangle::nTotalNum = 0;
int CRectangle::nTotalArea = 0;

using namespace std;

CRectangle::CRectangle(int w_, int h_)
{
  width = w_; 
  height = h_;
  nTotalNum ++;
  nTotalArea += w_ * h_;
  cout<<"constructor:"<<nTotalNum<<" called. "<<endl;
}

CRectangle::CRectangle(CRectangle& A)// copy constructor
{
  nTotalNum ++;
  nTotalArea += width * height;
  cout<<"copy constructor:"<<nTotalNum<<" called. "<<endl;
}


CRectangle::~CRectangle()
{
  nTotalNum --; 
  nTotalArea -= width*height;
  cout<<"deconstructor called "<<endl;
  cout<<"deconstructor:"<<nTotalNum<<" called. "<<endl;
}

void CRectangle::printTotal()
{
  cout<<"Total num:"<<nTotalNum<<endl;
  cout<<"Total Area:"<<nTotalArea<<endl;
}



