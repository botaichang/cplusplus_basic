#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1("Hello");
  cout<<s1<<endl;
  string s2(8,'x');
  cout <<s2<<endl;



  string s3("hello");

  bool b = (s1 == s3);
  cout<<b <<endl;


  int f1 = s1.compare(s2);
  int f2 = s1.compare(s3);
  cout <<"f1 "<<f1<<"f2 "<<f2<<endl;

  cout<<"capacity: "<<s1.capacity()<<endl;
  cout<<"max size: "<<s1.max_size()<<endl;
  cout<<"size: "<<s1.size()<<endl;
  cout<<""<<s1.length()<<endl;
  cout<<""<<s1.empty()<<endl;
  cout<<s1.find_last_of("el")<<endl;
  return 0;
 
}
