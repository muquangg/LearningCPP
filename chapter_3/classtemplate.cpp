/*
 * @Author: DjinXie
 * @Date: 2021-07-28 00:08:43
 * @LastEditTime: 2021-11-09 00:09:39
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \Learning_C++\chapter_3\classtemplate.cpp
 */

#include <iostream>
#include <typeinfo>
#include "classtemplate.h"

int main()
{
    Complex <int> c1(1, 2);
    std::cout << typeid(c1).name() << ": " << c1 << std::endl;
    Complex <double> c2(1.1, 3.5);
    std::cout << typeid(c2).name() << ": " << c2 << std::endl;
 
    return 0;
}
