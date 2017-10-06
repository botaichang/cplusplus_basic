#ifndef CComplex_HPP_
#define  CComplex_HPP_
class CComplex{
private:
    int x;
    int real; 
    int image; 
public:
    CComplex();
    ~CComplex();
    CComplex(int n);
    CComplex(float n);
    CComplex(int real_,int image_); //constructor 2
    CComplex(const CComplex & A);
    void set(int real_, int image_);
    void print();
};

#endif 

