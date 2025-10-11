#include <iostream>
#include <vector>
#include <string>

struct Student {
    std::string id;
    std::string name;
    int scoreA = 0, scoreB = 0, scoreC = 0;
};

int main() {
    std::vector<Student> students;
    int num;
    std::cin >> num;

    for (int i = 0; i < num; ++i) {
        Student s;
        std::cin >> s.id >> s.name >> s.scoreA >> s.scoreB >> s.scoreC;
        students.push_back(s);
    }

    for (const auto& s : students)
        std::cout << s.id << "," << s.name << "," << s.scoreA << "," << s.scoreB << "," << s.scoreC << "\n";

    return 0;
}
//
// Created by 62705 on 2025/10/11.
//