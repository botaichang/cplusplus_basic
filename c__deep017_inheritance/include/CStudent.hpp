#ifndef CSTUDENTS_HPP_
#define CSTUDENTS_HPP_
#include <iostream> 
#include <string>

using namespace std; 

class CStudent{

private:
   string name; 
   string id; 
   char gender; 
   int age; 

public: 
   void PrintInfo();
   void SetInfo(const string &name_, const string &id_,int age_, char gender_);
   string GetName(); 
};



#endif 
