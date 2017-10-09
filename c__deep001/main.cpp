#include <iostream>
#include "include/CRectangle.hpp"
using namespace std;

int main(int argc, char **argv) {
  int w,h;
  CRectangle rect; 
  rect.Init(3,5);
  rect.getW(w);
  rect.getH(h);
  cout<<"w:"<<w<<endl;
  cout<<"h:"<<h<<endl;
  cout<<"w pow 2:"<<rect.wPow2()<<endl;   
  
  rect.valueX(10);   //function reload 
  //cout<<"center is :"<<rect.center<<endl;    //Error, center is private
  cout<<"center is :"<<rect.valueX()<<endl; //function reload
  return 0; 
  
}
