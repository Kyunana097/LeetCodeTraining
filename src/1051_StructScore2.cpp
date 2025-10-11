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
    students.reserve(num);      //申请内存 快速扩容

    /* 追踪最高分学生 */
    const Student* topStudent = nullptr;
    int maxTotal = -1;
    int sumA = 0, sumB = 0, sumC = 0; // 用 64 位防溢出

    for (int i = 0; i < num; ++i) {
        Student s;
        std::cin >> s.id >> s.name >> s.scoreA >> s.scoreB >> s.scoreC;
        students.push_back(s);

        sumA += s.scoreA;
        sumB += s.scoreB;
        sumC += s.scoreC;

        int total = s.scoreA + s.scoreB + s.scoreC;
        if (total > maxTotal) {          // 严格大于，保证第一个最高分被记录
            maxTotal = total;
            topStudent = &students.back(); // 指向当前 vector 里的元素
        }
    }
    // 计算平均值（浮点）
    const int avgA = sumA / num;
    const int avgB = sumB / num;
    const int avgC = sumC / num;

    std::cout << avgA << " " << avgB << " " << avgC << "\n";
    if (topStudent)
        std::cout << topStudent->id << " " << topStudent->name << " " << topStudent->scoreA << " " << topStudent->scoreB << " " << topStudent->scoreC << "\n";
    return 0;
}
//
// Created by 62705 on 2025/10/11.
//