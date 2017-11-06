#include <iostream>
using namespace std;
class Son{
public:
  virtual ~Son()
  {
     cout<<"bye from son"<<endl;
  }
};

class Grandson: public Son{
public:
  ~Grandson()
  {
    cout<<"bye from grandson"<<endl;
  }
};

