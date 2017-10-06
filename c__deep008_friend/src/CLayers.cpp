
#include "../include/CLayers.hpp"
#include "../include/CWeights.hpp"
#include <iostream>
using namespace std;


CLayers::CLayers(int nLayer_)
{
   nLayer = nLayer_; 
   cout<<"CLayers constructor called."<<endl;
}
void CLayers::printLayer()
{
   cout<<"nLayer: "<<nLayer<<endl;
}
CLayers::~CLayers()
{
 cout<<"CLayers deconstructor called."<<endl;
}
void CLayers::modifyWeights(CWeights & W,int F_, int C_, int H_, int W_)
{
    W.modifyWeights(F_,C_,H_,W_);//friend  
    cout<<"friend function called."<<endl;
}

