#ifndef CUNDERGRADUATESTUDENTS_HPP_
#define CUNDERGRADUATESTUDENTS_HPP_
#include <iostream> 
#include <string>
#include "CStudent.hpp"

using namespace std; 

//public inheritance
class CUndergraduateStudent:public CStudent{

private:
   string department; 

public: 
   void QualifiedForBaoYan();
   void PrintInfo(); 
   void SetInfo(const string &name_, const string &id_,int age_, char gender_, const string &department_);
};



#endif 
