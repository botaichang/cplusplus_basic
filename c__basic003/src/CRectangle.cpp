#include "../include/CRectangle.hpp"

	void CRectangle::Init(int w_, int h_)
	{
		w = w_; 
		h = h_; 
	}
	void CRectangle::setWH(int w_,int h_)
	{
	     w = w_; 
	     h = h_; 
	}
	void CRectangle::getW(int& w_)
	{
	     w_ = w; 
	}
	void CRectangle::getH(int& h_)
	{
	     h_ = h; 
	}
	int CRectangle::Area()
	{
		return w*h; 
	}
	int CRectangle::Perimeter()
	{
		return 2*(w+h);
	}
	