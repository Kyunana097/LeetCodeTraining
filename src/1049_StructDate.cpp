#include <iostream>

struct date{
    int year;
    int month;
    int day;
};

int Day_Of_Year(int year, int month, int day) {
    int sum = 0;
    static int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    // 闰年修正
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        if (month > 2)
            sum += 1;

    for (int i = 0; i < month - 1; ++i)
        sum += days[i];
    sum += day;
    return sum;
}

int main() {
    date date{};
    std::cin >> date.year >> date.month >> date.day;
    const int day = Day_Of_Year(date.year, date.month, date.day);
    std::cout << day <<"\n";
    return 0;
}
//
// Created by 62705 on 2025/10/11.
//