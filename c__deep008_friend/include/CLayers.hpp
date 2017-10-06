
#ifndef CLAYERS_HPP_
#define CLAYERS_HPP_
#include "CWeights.hpp"
class CLayers{
private:
      int nLayer; 
public:
      CLayers(int nLayer_);
      ~CLayers();
      void printLayer();
      void modifyWeights(CWeights & W,int F_, int C_, int H_, int W_);
      friend void CWeights::modifyWeights(int F_, int C_, int H_, int W_);
};

#endif 