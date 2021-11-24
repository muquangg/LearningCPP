/*
 * @Author: DjinXie
 * @Date: 2021-07-28 00:00:19
 * @LastEditTime: 2021-08-03 23:19:00
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \Learning_C++\chapter_3\classtemplate.h
 */

#ifndef __CLASSTEMPLATE__H__
#define __CLASSTEMPLATE__H__

template <typename T>
class Complex{
    public:
        Complex(const T& r, const T& i): real(r), imag(i){

        } 
        T getReal() const { return real; }
        T getImag() const { return imag; }
    private:
        T real;
        T imag;
};
#include <iostream>
using namespace std;
ostream& operator << (ostream& os, const Complex<int>& c){
    os << "(" << c.getReal() << ", " << c.getImag() << "j" << ")";
    return os;
} 

ostream& operator << (ostream& os, const Complex<double>& c){
    os << "(" << c.getReal() << ", " << c.getImag() << "j" << ")";
    return os;
}
#endif