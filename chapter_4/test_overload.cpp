/*
 * @Author: your name
 * @Date: 2021-11-09 19:42:32
 * @LastEditTime: 2021-11-09 19:54:53
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Learning_C++\chapter_4\test_overload.cpp
 */

/*
 * @Author: your name
 * @Date: 2021-11-09 19:38:59
 * @LastEditTime: 2021-11-09 19:41:12
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \Learning_C++\chapter_4\test_override.cpp
 */
#include <iostream> 
#include <stdlib.h>
#include <math.h>
using namespace std;

int power(int x)
{
    return pow(x, 2);
}

int power(int x, int y)
{
    return pow(x, y);
}
// double power(int x, int y)
// {
//     return  pow(x, y);
// }
// 程序的主函数
int main( )
{
   cout << power(3) << endl;

   return 0;
}