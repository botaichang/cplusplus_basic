#include <iostream>

#include "include/CRectangle.hpp"

using namespace std;

int main(int argc, char **argv) {
        CRectangle rect; 
	int w, h; 
	cin >> w >>h; 
	rect.Init(w,h);
	cout<<"area is : "<<rect.Area()<<endl<<" Perimeter is :"<<rect.Perimeter() <<endl;
	
	cout<< "\nsizeof rect should be 8 bytes, and output is  "<< sizeof(rect)<<endl;
	
	rect.setWH(6,8);
	rect.getW(w);
	rect.getH(h);
	cout<<"new width is : "<<w<<endl;
	cout<<"new height is : "<<h<<endl;
	cout<<"new area is : "<<rect.Area()<<endl<<"new Perimeter is :"<<rect.Perimeter() <<endl;
	
	//rect.w = 4; //error : because w is private variable in class 
	//rect.h = 5; //error : because h is private variable in class
        return 0;
}