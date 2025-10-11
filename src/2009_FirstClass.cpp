#include <iostream>
#include <cstdio>

class Date {
private:
    int year = 0;
    int month = 0;
    int day = 0;

public:
    void Set(const std::string& s) {
        sscanf_s(s.c_str(),"%d-%d-%d", &year, &month, &day);
    }

    void print() const {
        std::cout << year << ":" << month << ":" << day;
    }
};

int main() {
    std::string str;
    std::cin >> str;
    Date d;
    d.Set(str);
    d.print();

    return 0;
}
//
// Created by 62705 on 2025/10/11.
//