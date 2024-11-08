/*
 * @FilePath: 01 Cpp默认实参.cpp
 * @Author: ModestWang 1598593280@qq.com
 * @Date: 2024-10-17 23:38:11
 * @LastEditors: ModestWang
 * @LastEditTime: 2024-10-27 11:00:13
 * 2024 by ModestWang, All Rights Reserved.
 * @Descripttion:
 */
#include <iostream>
#include <memory>

using std::cout, std::endl;

struct Base {
    virtual void f(int a = 7) {
        cout << "Base" << a << endl;
    }
};

struct Derived : Base {
    void f(int a = 2) override {
        cout << "Derived" << a << endl;
    }
};

int main() {
    std::unique_ptr<Base> p{ new Derived() };
    p->f(); // Derived7, 而不是Derived2
}
