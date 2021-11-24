/*
 * @Author: your name
 * @Date: 2021-07-28 01:03:57
 * @LastEditTime: 2021-07-28 01:18:43
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \Learning_C++\chapter_3\functiontemplate.h
 */

#ifndef __FUNCTIONTEMPLATE__H__
#define __FUNCTIONTEMPLATE__H__

class Stone{
    public:
        Stone(int w=0, int h=0, int weight=0): _w(w), _h(h), _weight(weight) { }
        bool operator < (const Stone& rhs) const { // rhs == right this
            return _weight < rhs._weight;
        }
        int getWeight() const { return _weight; } 
    private:
        int _w, _h, _weight;
};

template <class T> 
inline
const T& min(const T& a, const T& b){
    return a < b ? a : b;
}

#endif