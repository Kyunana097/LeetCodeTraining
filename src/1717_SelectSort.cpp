#include <iostream>
#include <vector>

int Select_Min_Key(std::vector<int>& vec,int i) {
    int min_idx = i;
    for (int j = i + 1; j < vec.size(); ++j) {
        if (vec[j] < vec[min_idx])
            min_idx = j;
    }
    return min_idx;
}

void Select_Sort(std::vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        int j = Select_Min_Key(vec, i);
        if (i != j)
            std::swap(vec[i], vec[j]);
    }
}

int main() {
    int Num;
    std::cin >> Num;
    if(Num <= 0)
        return -1;
    int x;
    std::vector<int> vec;
    for(int i = 0; i < Num; i++){
        std::cin >> x;
        vec.push_back(x);
    }

    Select_Sort(vec);

    for(const int num : vec)
        std::cout << num << " ";

    std::cout << std::endl;
    return 0;
}

//
// Created by 62705 on 2025/10/10.
//