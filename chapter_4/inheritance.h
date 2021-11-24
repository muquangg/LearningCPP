/*
 * @Author: DjinXie
 * @Date: 2021-08-04 00:42:52
 * @LastEditTime: 2021-11-09 20:10:50
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \Learning_C++\chapter_4\inheritance.h
 */
#ifndef __INHERITANCE__H__
#define __INHERITANCE__H__

#include <iostream>
#include <string.h>
using namespace std;

/**
 * @description: 父类定义基本操作
 */
class CDocument{
    public:
        CDocument() { cout << "CDounment ctor ..." << endl; }
        bool openDoc();
        virtual bool serialize() = 0;
        virtual ~CDocument(){ cout << "CDounment dtor ..." << endl; }
};

/**
 * @description: 文件打开操作
 * @param {*}
 * @return {bool 返回打开的状态}
 */
bool CDocument::openDoc()
{
    // 每一个输出都模拟一个算法
    cout << "dialog..." << endl;
    cout << "check file status..." << endl;
    cout << "open file..." << endl;
    serialize();
    cout << "close file..." << endl;
    cout << "update all views..." << endl;

    return true;
}

class MyDocument : public CDocument{
    public:
        MyDocument() { cout << "MyDounment ctor ..." << endl; }
        virtual bool serialize(){
            cout << "serialize ..." << endl;
            return true;
        }
        virtual ~MyDocument() { cout << "MyDounment dtor ..." << endl; }
};
class Document{
    public:
        Document() { cout << "Dounment ctor ..." << endl; }
        ~Document(){ cout << "Dounment dtor ..." << endl; }
};
#endif