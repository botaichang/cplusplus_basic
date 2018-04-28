#include <iostream>
#include <fstream>
#include <set>

using namespace std;

template <class T>
void Print(T first, T last)
{
   for(; first != last ; ++ first)
     cout << *first <<""<<endl;
}


class A{
private: 
  int n;
public:
  A(int n_)
  {n = n_;}
  
  friend bool operator< (const A &a1, const A &a2) 
  {
    return a1.n < a2.n; 
  }
  
  friend ostream & operator<<(ostream & o, const A & a2)
  {
    o << a2.n; 
    return o;
  }
  friend class MyLess;
};

struct MyLess
{
 bool operator()(const A&a1, const A&a2) 
 {
   return (a1.n % 10) < (a2.n %10);
 }
};
typedef multiset<A> MSET1; 
typedef multiset<A,MyLess> MSET2; 

int main()
{
   const int SIZE = 6; 
   A a[SIZE] = {4,22,19,8,33,10};
   MSET1 m1;
   Print(m1.begin(),m1.end());
   m1.insert(a,a+SIZE);
   m1.insert(22);
   cout<<"m1------->"<<endl;
   Print(m1.begin(),m1.end());
   cout<<m1.count(22)<<endl;
   Print(m1.begin(),m1.end());
   
   MSET1::iterator pp = m1.find(19);
   if(pp != m1.end())
     cout<<"found"<<endl;
   cout << *m1.lower_bound(19)<<endl;
   cout << *m1.upper_bound(19)<<endl;
   
   
   //-----------------------------------
   MSET2 m2; 
   m2.insert(a,a+SIZE);
   cout<<"m2------->"<<endl;
   Print(m2.begin(),m2.end());
   
   //-----------------------------------
   typedef set<int>::iterator it; 
   int b[5]={9,2,1,4,5}; 
   set<int> st(b,b+5);
   pair<it,bool> result; 
   result = st.insert(6);
   cout <<"second "<<result.second<<endl;
   if(result.second)
      cout <<*result.first<<" inserted"<<endl;
   result = st.insert(6);
   if(result.second)
      cout <<*result.first<<" inserted"<<endl;
   else 
     cout <<*result.first<<" already exists"<<endl;
   
   return 0;
}



