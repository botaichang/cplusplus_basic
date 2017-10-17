#include "include/CDemo.hpp"

#include <iostream>
using namespace std; 

int main()
{
	CDemo a(5); 
	cout<<"1:"<<(a++)<<endl;
	cout<<"2:"<<a<<endl;
	cout<<"3:"<<(++a)<<endl;
	cout<<"4:"<<a<<endl;
	cout<<"5:"<<(--a)<<endl;
	cout<<"6:"<<a<<endl;
	cout<<"7:"<<(a--)<<endl;
	cout<<"8:"<<a<<endl;
	return 0;


}
