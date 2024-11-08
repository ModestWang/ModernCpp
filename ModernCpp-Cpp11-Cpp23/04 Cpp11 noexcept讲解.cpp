/*
 * @FilePath: 04 Cpp11 noexcept讲解.cpp
 * @Author: ModestWang 1598593280@qq.com
 * @Date: 2024-10-17 23:40:44
 * @LastEditors: ModestWang
 * @LastEditTime: 2024-11-01 13:46:58
 * 2024 by ModestWang, All Rights Reserved.
 * @Descripttion:
 */
#include <iostream>

using std::cout;
using std::endl;

// noexcept是C++11引入的一个新的关键字，用来指明函数是否抛出异常。
// noexcept的作用是告诉编译器，函数不会抛出异常，这样编译器可以对代码进行一些优化。
void func1() noexcept {
    std::cout << "func1" << std::endl;
}

void func2() noexcept(false) {
    std::cout << "func2" << std::endl;
}

int main() {
    cout << std::boolalpha << noexcept(func1()) << endl; // true
    cout << std::boolalpha << noexcept(func2()) << endl; // false
    return 0;
}
