/*
 * @FilePath: 06 lambda剖析.cpp
 * @Author: ModestWang 1598593280@qq.com
 * @Date: 2024-10-17 23:41:54
 * @LastEditors: ModestWang
 * @LastEditTime: 2024-11-01 15:30:55
 * 2024 by ModestWang, All Rights Reserved.
 * @Descripttion:
 */
#include <iostream>
using std::cout;
using std::endl;

int main() {
    // 1.
    // + 号的作用是将lambda表达式转换为函数指针
    auto* p = +[](int a, int b) -> int { return a + b; };
    cout << p(1, 5) << endl;

    // 2.
    static int a = 10;
    // [=] 表示以值传递的方式捕获所有外部变量
    auto f = [=]() { ++a; };
    f();
    cout << a << endl;

    // 3.
    float  x;
    float& y  = x;
    auto   pp = [=] {};
    cout << sizeof pp << endl; // 1

    // 4.
    int  n1 = 10;
    auto q1 = [=]() { int arr[n1]; };
    cout << sizeof q1 << endl;

    // 5.
    const int n2 = 10;
    auto      q2 = [=]() { int arr[n2]; };
    cout << sizeof q2 << endl;

    // 6.
    const int N  = 10;
    auto      q3 = [=]() { int q3 = N; };
    cout << sizeof q3 << endl;
}
