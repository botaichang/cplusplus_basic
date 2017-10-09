
#ifndef CLAYERS_HPP_
#define CLAYERS_HPP_
#include "CWeights.hpp"
class CLayers{
private:
      int nLayer; 
      CWeights weights; 
      
public:
      CLayers(int nLayer_,int F_, int C_, int H_, int W_);
      ~CLayers();
      void printLayer();
};

#endif 