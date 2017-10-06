
#include "../include/CLayers.hpp"
#include "../include/CWeights.hpp"
#include <iostream>
using namespace std;

CLayers::CLayers(int nLayer_,int F_, int C_, int H_, int W_):nLayer(nLayer_),weights(F_,C_,H_,W_)
{
   cout<<"CLayers constructor called."<<endl;
}
void CLayers::printLayer()
{
   cout<<"nLayer: "<<nLayer<<endl;
   weights.printShape();
}
CLayers::~CLayers()
{
 cout<<"CLayers deconstructor called."<<endl;
}


