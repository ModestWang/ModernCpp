/*
 * @FilePath: 03 Cpp11 用户定义字面量.cpp
 * @Author: ModestWang 1598593280@qq.com
 * @Date: 2024-10-17 23:39:57
 * @LastEditors: ModestWang
 * @LastEditTime: 2024-11-01 13:43:54
 * 2024 by ModestWang, All Rights Reserved.
 * @Descripttion:
 */
#include <chrono>
#include <iostream>
#include <string>
using namespace std::literals;
using namespace std::literals::chrono_literals;
using std::cout;
using std::endl;
using std::string;

string operator""_r(const char* str, size_t size) { // size_t换成int就会报错
    return string{ str, size };
}

string operator""_i(size_t size) {
    return std::to_string(size);
}

int main() {
    // cout << "hello"_r << endl;
    auto str1 = "**"sv;
    auto str2 = 123_i;
    auto str3 = 123ms;
    cout << str2 << endl;
}
