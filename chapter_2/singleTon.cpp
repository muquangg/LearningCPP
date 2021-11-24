/*
 * @Author: your name
 * @Date: 2021-06-12 00:56:45
 * @LastEditTime: 2021-11-09 20:25:40
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \Learning_C++\chapter_2\singleTon.cpp
 */
#include <iostream> 
using namespace std;

class A  
{
public:
    static A& getInstance(); 
    void setup()  
    { 
        cout << "I am in setup" << endl; 
    }
private:
    A() { cout << "ctor" << endl;};
    A(const A& rhs) { cout << "copy ctor" << endl; };
};

A& A::getInstance()
{   
    // A b;
    // static A a = b;
    static A a;
    return a;
}

int main()
{
    A::getInstance().setup();
    A::getInstance().setup();

 
    return 0;
}