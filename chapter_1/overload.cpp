#include <iostream> 
using namespace std;

class complex;

class complex
{
    public:
    complex(double r=0, double i=0)
    : re(r), im(i)
    { }
    
    double real() const { return re; }
    double imag() const { return im; }
    complex& operator += (const complex &x);
    
    private:
    double re;
    double im;
};

inline ostream& 
operator << (ostream &os, const complex &c)
{
    return os << c.real() << " + i" << c.imag();  
}

inline complex&
complex::operator += (const complex &x)
{
    this->re += x.real();
    this->im += x.imag();
 
    return *this;
}

inline complex
operator + (const complex &x, const complex &y)
{
    return complex(x.real() + y.real(), x.imag() + y.imag());    
}

inline complex
operator + (const complex &x, double y)
{
    return complex(x.real() + y, x.imag());    
}

int main() {
    complex c1(1, 2);
    complex c2;
     
    cout << c1.real() << " + i" << c1.imag() << endl;
    cout << c1 << endl;
    
    c1 += c2;
    cout << c1 + c2 << endl;
    
    cout << c1 + 4.6;
    
    return 0;
}