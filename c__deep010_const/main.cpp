#include "include/Sample.hpp"
#include <iostream>
using namespace std;

int main()
{
	 int param = 5; 
	 const Sample o ; 
	 
	 //o.value = 100;//error 
	 o.GetValue();//const obj can call const member function
	 o.changeParam(param);
	 cout<<param<<endl;
	 o.setValue(8);
	 cout<<"static value: "<<Sample::static_value<<endl;
	 
	 
	 Sample o2;
	 o2.setValue(8);
	 cout<<"static value: "<<Sample::static_value<<endl;

	return 0; 
}
