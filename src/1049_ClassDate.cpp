#include <iostream>
#include <cstdio>

class Date {
private:
    int year = 0;
    int month = 0;
    int day = 0;
public:
    void Set(int y, int m, int d) {
        year = y; month = m; day = d;
    }

    [[nodiscard]] bool is_leap() const {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        else
            return false;
    }

    [[nodiscard]] int Day_Of_Year() const {
        int sum = 0;
        static int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

        for (int i = 0; i < month - 1; ++i)
            sum += days[i];
        sum += day;
        // 闰年修正
        if (is_leap() && month > 2)
            ++sum;

        return sum;
    }

    void print() const {
        std::cout << year << ":" << month << ":" << day;
    }
};

int main() {
    int y, m, d;
    std::cin >> y >> m >> d;
    // 构造 Date 对象后调用成员函数
    Date date;
    date.Set(y, m, d);   // 重载一个 Set(int,int,int) 更直观

    std::cout << date.Day_Of_Year() << "\n";
    return 0;
}