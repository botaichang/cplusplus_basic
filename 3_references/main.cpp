#include <iostream>
using namespace std;


int swap(int *a,int *b)
{
       int tmp; 
       tmp = *a; 
       *a = *b;
       *b = tmp;
       
}
int swap_inference(int& a,int& b)
{
       int tmp; 
       tmp = a; 
       a = b;
       b = tmp;
       
}

int n;
int & setValues()
{
  return n;
}
int main(int argc, char **argv) {
    std::cout << "Hello, world!" << std::endl;
    
    int a = 10, b = 11;
    swap(&a , &b);
    cout <<a<<endl<<b<<endl;
    
    // 1.inferences  as function parammeters
    int c = 10, d = 11;
    swap_inference(c,d);
    cout <<c<<endl<<d<<endl;
    
    
    //2. inferences as function return 
    setValues() = 30;
    cout<< n <<endl;
    return 0;
}
