#ifndef CRECTANGLE_HPP_
#define CRECTANGLE_HPP_
//This can be written to CRectangle.hpp
class CRectangle
{
private:
	int w,h; 
	int center; 
public:
        inline int wPow2();
	void Init(int w_, int h_);
	void setWH(int w_, int h_);
	void getW(int& w_);
	void getH(int& h_);
	int Area();
	int Perimeter();
	
	void valueX(int center_);  //function reload
	inline int valueX(); //function reload 
	
};


int CRectangle::wPow2() 
{
	return w*w;
}
        
int CRectangle::valueX()
{
	  return center;  

}

#endif