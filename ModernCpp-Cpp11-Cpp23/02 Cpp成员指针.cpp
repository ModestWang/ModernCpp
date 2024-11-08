/*
 * @FilePath: 02 Cpp成员指针.cpp
 * @Author: ModestWang 1598593280@qq.com
 * @Date: 2024-10-17 23:38:34
 * @LastEditors: ModestWang
 * @LastEditTime: 2024-11-01 11:16:51
 * 2024 by ModestWang, All Rights Reserved.
 * @Descripttion:
 */
#include <iostream>

using std::cout, std::endl;

int main() {
    int  a = 1;
    auto f = [a](int b) {
        cout << a + b << endl;
    };

    a = 2;
    f(3); // 4
    a = 3;
    f(3); // 4
    return 0;
}
