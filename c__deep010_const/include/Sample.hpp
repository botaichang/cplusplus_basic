#ifndef Sample_HPP_
#define Sample_HPP_

// ====================================================================
// const member function reload
//     1. const object can only call const member function
// const member function can  modify : 
//     1.  static member variable; 
//     2.  static member function 
//     3.  const member function
//     4.  can only read non static member variable, but can not write
// ====================================================================
class Sample
{
public:
	int value ; 
	static int static_value ;

	void setValue(int value_) const; //const member function 
	void setValue(int value_); //const member function reload

	void GetValue() const; //const member function 
	void printValue() const;// const member function
	int changeParam(int & param) const; 

	void func(); 
	Sample();

};
#endif 

