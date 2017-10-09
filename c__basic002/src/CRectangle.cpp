#include "../include/CRectangle.hpp"

	void CRectangle::Init(int w_, int h_)
	{
		w = w_; 
		h = h_; 
	}
	int CRectangle::Area()
	{
		return w*h; 
	}
	int CRectangle::Perimeter()
	{
		return 2*(w+h);
	}
	