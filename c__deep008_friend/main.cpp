
#include <iostream>

#include "include/CWeights.hpp"
#include "include/CLayers.hpp"
using namespace std;

int main()
{
  CLayers layer1(1); 
  CWeights weights(96,3,3,3); 
  weights.printShape();
  layer1.printLayer();
  layer1.modifyWeights(weights,3,3,3,3);
  weights.printShape();
  
  return 0;
}