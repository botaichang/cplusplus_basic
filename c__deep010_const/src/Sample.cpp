#include "../include/Sample.hpp"
#include <iostream>
using namespace std; 

int Sample::static_value = 0;

void Sample::GetValue() const
{
	//value = 0; //error 
	//func();//error const function cannot call non const func
	Sample::printValue();
}

void Sample::printValue() const
{
	cout<<"const print value:"<<value<<endl;
}

Sample::Sample()
{
	cout<<"constructor called."<<endl;
}

int Sample::changeParam(int & param) const
{
	param += 1;
	return param;
}

void Sample::setValue(int value_) const
{
	Sample::static_value = value_; 
}
void Sample::setValue(int value_) 
{
	Sample::static_value = 2*value_; 
}
