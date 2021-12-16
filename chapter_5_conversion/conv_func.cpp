#include <iostream>

class Fraction
{
public:
    // 没有 explicit ， 报错
    explicit Fraction(int num, int den=1)
     : m_numerator(num), m_denominator(den) { }
    
    operator double() const {
        return (double)m_numerator / m_denominator;
    }
    Fraction operator * (const Fraction & f){
        return Fraction(m_numerator*f.m_numerator, m_denominator*f.m_denominator);
    }

private:
    int m_numerator;
    int m_denominator;
    friend std::ostream& operator << (std::ostream &os, const Fraction & f);
};

std::ostream& operator << (std::ostream &os, const Fraction & f){
    os << f.m_numerator << "/" << f.m_denominator;
    return os;
}
int main()
{
    Fraction f(1, 2);
    // Fraction d = f * 5; // f 转成 double，报错因为double不能转成Fraction
    Fraction d = Fraction(f * 5);
    
    std::cout << d << std::endl;

    return 0;
}