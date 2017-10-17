#ifndef CDEMO_HPP_
#define CDEMO_HPP_
class CDemo
{
private:
	int n; 
public:
        CDemo(int i=0);//constructor
	CDemo & operator++();//前置＋＋, a++
	CDemo operator++(int);// ++a;
	operator int();
	CDemo & operator--();
	CDemo operator--(int);
	
};

#endif 
