#include <iostream>

class CRectangle
{
public:
	int w,h; 
	void Init(int w_, int h_)
	{
		w = w_; 
		h = h_; 
	}
	int Area()
	{
		return w*h; 
	}
	int Perimeter()
	{
		return 2*(w+h);
	}
	
};

	

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
