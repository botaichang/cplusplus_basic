#include "include/CStudent.hpp" 
#include "include/CUndergraduateStudent.hpp" 
#include <string>

using namespace std; 

int main()
{
   CStudent a; 
   const string name = "xiaoming";
   const string id = "1"; 
   char gender = 'M';
   int age = 13;
   a.SetInfo(name,id,age,gender);
   a.PrintInfo(); 

   CUndergraduateStudent s; 
   s.SetInfo("chang","2",25,'F',"business");
   s.PrintInfo();

   cout<<sizeof(a)<<endl;
   cout<<sizeof(s)<<endl;
   return 0;

}
