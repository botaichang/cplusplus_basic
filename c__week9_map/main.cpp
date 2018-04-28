#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main()
{
  //typedef multimap< _Key, _Tp, _Compare, _Alloc >
  typedef multimap<int,double,less<int> > mmid;
  mmid pairs;
  cout <<pairs.count(15)<<endl;
  pairs.insert(mmid::value_type(15,2.7));
  cout <<pairs.count(15)<<endl;
  pairs.insert(mmid::value_type(15,9.8));
  cout <<pairs.count(15)<<endl;
  pairs.insert(mmid::value_type(18,3.9));
  for(mmid::const_iterator i = pairs.begin(); i != pairs.end(); i++)
  {
    cout<<"( " << i->first<<","<<i->second <<")"<<endl; 
  }
  
  
  //-----------------------------------------------------
  typedef map<int,double,less<int> > mapid;
  mapid pairs_2;
  cout <<pairs_2.count(15)<<endl;
  pairs_2.insert(mapid::value_type(15,2.7));
  cout <<pairs_2.count(15)<<endl;
  pairs_2.insert(mapid::value_type(15,9.8));
  cout <<pairs_2.count(15)<<endl;
  pairs_2.insert(mapid::value_type(18,3.9));
  for(mapid::const_iterator i = pairs.begin(); i != pairs.end(); i++)
  {
    cout<<"( " << i->first<<","<<i->second <<")"<<endl; 
  }
  
  
  
  return 0;
  
}