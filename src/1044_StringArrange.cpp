#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string s[3];
    for (std::string & x : s)
        std::getline(std::cin,x);
    std::sort(std::begin(s),std::end(s));
    for (const std::string & x : s)
        std::cout << x << "\n";
    return 0;
}
//
// Created by 62705 on 2025/10/7.
//