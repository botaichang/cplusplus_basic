#ifndef CRectangle_HPP_
#define CRectangle_HPP_
class CRectangle
{
private:
  int width;
  int height;
  static int nTotalNum; 
  static int nTotalArea;
public:
  CRectangle(int w_, int h_);
  CRectangle(CRectangle & A);
  ~CRectangle();
  static void printTotal();
  
};
#endif 