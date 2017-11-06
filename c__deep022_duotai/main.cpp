#include "src/duotai.cpp"

#include <iostream>
int main()
{
   A a; 
   B b; 
   D d; 
   E e; 
   A *pa = &a; 
   B *pb = &b; 
   D *pd = &d; 
   E *pe = &e; 
   pa->Print(); 
   pb->Print(); 
   pd->Print(); 
   pe->Print();

   pa = pb; 
   pa->Print(); 

   pa = pe; 
   pa->Print(); 
   
   return 0;

}
