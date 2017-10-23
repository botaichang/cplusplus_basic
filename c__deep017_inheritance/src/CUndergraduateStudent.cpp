#include "../include/CUndergraduateStudent.hpp"
#include "../include/CStudent.hpp"
#include <iostream>
#include <string>

using namespace std; 

void CUndergraduateStudent::QualifiedForBaoYan()
{
   cout<<"quanlified for Bao Yan" <<endl;
}

void CUndergraduateStudent::PrintInfo()
{
   CStudent::PrintInfo();
   //cout<<CStudent::name; //error 派生类的成员函数不能访问基类中的private成员．
   cout<<"Department: "<<department<<endl;
}
void CUndergraduateStudent::SetInfo(const string &name_, const string &id_,int age_, char gender_,const string &department_)
{
	CStudent::SetInfo(name_,id_,age_,gender_);
	department = department_; 
}
