#include "../include/CDemo.hpp"

CDemo::CDemo(int i )
{
	n = i; 
}

CDemo& CDemo::operator++()
{
	n++; 
	return  *this;
}

CDemo CDemo::operator++(int m)
{
       CDemo tmp(*this); //store the original value
       n++;  // and then n + 1;  
       return tmp; 
}

CDemo::operator int()
{
	return n; 
}
CDemo& CDemo::operator--()
{
	n--; 
	return  *this;
}

CDemo CDemo::operator--(int m)
{
       CDemo tmp(*this); //store the original value
       n--;  // and then n + 1;  
       return tmp; 
}
