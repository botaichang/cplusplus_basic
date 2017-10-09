#include <iostream>

#include "include/CRectangle.hpp"

using namespace std;

int main(int argc, char **argv) {
        CRectangle rect; 
	int w, h; 
	cin >> w >>h; 
	rect.Init(w,h);
	cout<<"area is : "<<rect.Area()<<" Perimeter is :"<<rect.Perimeter() <<endl;
	cout<< "sizeof rect should be 8 bytes, and output is  "<< sizeof(rect)<<endl;
	
	
	CRectangle *p1 = &rect; 
	p1->w = 4; 
	p1->h = 3; 
	cout<<"area is : "<<p1->Area()<<" Perimeter is :"<<p1->Perimeter() <<endl;
        return 0;
}