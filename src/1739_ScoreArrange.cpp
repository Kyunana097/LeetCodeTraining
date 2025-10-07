#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

struct Student {
    std::string name;
    int age = 0;
    double score = 0 ;
};

int main() {
    int n;
    while (std::cin >> n) {
        std::vector<Student> stu(n);
        for (int i = 0; i < n; ++i)
            std::cin >> stu[i].name >> stu[i].age >> stu[i].score;

        std::sort(stu.begin(),stu.end(),
            [](const Student &a, const Student &b) {
                if (a.score != b.score)
                    return a.score < b.score;
                if (a.name != b.name)
                    return a.name < b.name;
                return a.age < b.age;
            });
        for (const auto & s : stu)
            std::cout << s.name << " " << s.age << " " << s.score << "\n";
    }
    return 0;
}
//
// Created by 62705 on 2025/10/7.
//