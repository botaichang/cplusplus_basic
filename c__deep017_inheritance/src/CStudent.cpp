#include "../include/CStudent.hpp"
#include <iostream>
#include <string>
using namespace std; 

void CStudent::PrintInfo()
{
   cout<<"name:"<<name<<endl;
   cout<<"id: "<<id<<endl;
   cout<<"age: "<<age<<endl;
   cout<<"gender: "<<gender<<endl;
}

void CStudent::SetInfo(const string &name_, const string &id_,int age_, char gender_)
{
        name = name_; 
	id = id_; 
	age = age_; 
	gender = gender_; 
}
string CStudent::GetName()
{
	return name; 
}
