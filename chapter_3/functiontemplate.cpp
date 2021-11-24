/*
 * @Author: DjinXie
 * @Date: 2021-07-28 01:12:56
 * @LastEditTime: 2021-07-28 01:19:38
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \Learning_C++\chapter_3\functiontemplate.cpp
 */

#include <iostream>
#include "functiontemplate.h"

int main()
{
    Stone s1(1, 1, 5);
    Stone s2(1, 2, 4);
    Stone s3;
    std::cout << "s1 weight: " << s1.getWeight() << std::endl;
    std::cout << "s2 weight: " << s2.getWeight() << std::endl;
    
    s3 = min(s1, s2);
    std::cout << "min weight: " << s3.getWeight() << std::endl;
    
 
    return 0;
}