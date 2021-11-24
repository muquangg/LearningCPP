/*
 * @Author: your name
 * @Date: 2021-06-11 23:07:32
 * @LastEditTime: 2021-07-27 01:23:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \Learning_C++\chapter_2\string.h
 */
#ifndef __MYSTRING__
#define __MYSTRING__

class String
{
public:                                 
   String(const char* cstr=0);                     
   String(const String& str);                    
   String& operator=(const String& str);         
   ~String();                                    
   char* get_c_str() const { return m_data; }
private:
   char* m_data;
};

#include <cstring>
# include<iostream>
inline
String::String(const char* cstr)
{
   std::cout << cstr << ", I am in ctor" << std::endl;
   if (cstr) {
      m_data = new char[strlen(cstr)+1];
      strcpy(m_data, cstr);
   }
   else {   
      m_data = new char[1];
      *m_data = '\0';
   }
}

inline
String::~String()
{
   delete[] m_data;
}
# include<iostream>
inline
String& String::operator=(const String& str)
{
   std::cout << str.get_c_str() << ", I am in copy set" << std::endl;
   if (this == &str) // 是否是自己
      return *this;

   delete[] m_data;
   m_data = new char[ strlen(str.m_data) + 1 ];  // 同类为友元函数，可以访问私有成员
   strcpy(m_data, str.m_data);
   return *this;
}

inline
String::String(const String& str)
{
   std::cout << str.get_c_str() << ", I am in copy ctor" << std::endl;
   m_data = new char[ strlen(str.m_data) + 1 ];
   strcpy(m_data, str.m_data);
}

#include <iostream>
using namespace std;

ostream& operator<<(ostream& os, const String& str)
{
   os << str.get_c_str();
   return os;
}

#endif
