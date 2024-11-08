/*
 * @FilePath: 05 Cpp11 lambda讲解.cpp
 * @Author: ModestWang 1598593280@qq.com
 * @Date: 2024-10-17 23:36:39
 * @LastEditors: ModestWang
 * @LastEditTime: 2024-11-01 15:11:55
 * 2024 by ModestWang, All Rights Reserved.
 * @Descripttion:
 */

// C++11引入了lambda表达式，lambda表达式是一个匿名函数，可以用来创建函数对象。
// lambda 类类型是无名的非联合非聚合类类型，也称为闭包类型(closure type)。
// lambda 类的operator()函数默认情况下是const，因此this指针就会被const修饰。
#include <iostream>
using std::cout;
using std::endl;

struct X : decltype([] { std::cout << "666"; }) {
    void print() {
        std::cout << "X::print()" << std::endl;
    }
};

int main() {
    auto p = [num = 1] {};
    cout << sizeof p << endl; // 1
    X x;
    x();

    // 使用指针获取lambda表达式
    void (*q)() = [] { std::cout << "666" << std::endl; };
    q();
}
