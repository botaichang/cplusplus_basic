#ifndef CRECTANGLE_HPP_
#define CRECTANGLE_HPP_
//This can be written to CRectangle.hpp
class CRectangle
{
private:
	int w,h; 
public:
	void Init(int w_, int h_);
	void setWH(int w_, int h_);
	void getW(int& w_);
	void getH(int& h_);
	int Area();
	int Perimeter();
	
};

#endif