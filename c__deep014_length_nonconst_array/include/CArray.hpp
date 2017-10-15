#ifndef CARRAY_HPP_
#define CARRAY_HPP_
class CArray{
private:
   int size; 
   int *ptr; 
     
public:
   CArray(int len=0); //constructor 
   CArray(CArray &c);//copy constructor 
   ~CArray();//deconstructor
   void push_back(int v);
   CArray operator=(const CArray &c);
   int length();
   int & operator[](int i);

};

#endif 

