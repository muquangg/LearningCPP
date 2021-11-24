/*
 * @Author: your name
 * @Date: 2021-06-11 23:07:32
 * @LastEditTime: 2021-07-27 01:21:50
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \Learning_C++\chapter_2\string_test.cpp
 */
#include "string.h"
#include <iostream>

using namespace std;

int main()
{
  String s1("hello"); 
  String s2("world");
    
  String s3(s2);  // 拷贝构造
  String s4 = s1; // 拷贝构造
  s3 = s1; // 拷贝赋值
  s3 = "1234"; // 先对"1234"构造，再拷贝赋值
  cout << s3 << endl;     
  cout << s2 << endl;  
  cout << s1 << endl; 
   
}
