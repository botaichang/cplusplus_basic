
#include <iostream>

#include "include/CWeights.hpp"
#include "include/CLayers.hpp"
using namespace std;

int main()
{
  CLayers layers(1,96,3,36,36);
  layers.printLayer();
  
  return 0;
  
}