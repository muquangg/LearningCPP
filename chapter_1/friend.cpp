#include <iostream> 
using namespace std;

class complex;

class complex
{
    public:
    complex(double r=0, double i=0)
    : re(r), im(i)
    { }
    
    complex& hidden_friend(const complex &x);
    double real() const { return re; }
    double imag() const { return im; }
    
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
complex::hidden_friend(const complex &x)
{
    this->re += x.re;
    this->im += x.im;
    return *this;
}

int main() {
    complex c1(1, 2);
    complex c2(1, 1);
    
    cout << c1 << endl;
    cout << c2 << endl;
    
    cout << c2.hidden_friend(c2) << endl;
    cout << c2 << endl;
    cout << c1.hidden_friend(c2) << endl;
    cout << c1 << endl;

    
    return 0;
}