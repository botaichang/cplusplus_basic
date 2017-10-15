#include "include/CArray.hpp"
#include <iostream>

//C++ implement lenght changeable array

using namespace std;

int main()
{
  CArray c; 
  c.push_back(4);
  c.push_back(3);
  c.push_back(2);
  c.push_back(1);
  c.push_back(9);
  for(int i = 0; i<c.length(); i++)
          cout <<c[i]<<" ";
  cout<<endl;

  CArray c2; 
  c2 = c; 
  for(int j = 0; j<c2.length(); j++)
	  cout<< c2[j]<<" ";
  cout<<endl;
  
  return 0; 
  
}
