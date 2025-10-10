#include <iostream>
#include <vector>

void HeapAdjust(std::vector<int>& vec, int low, int high) {
    int rc = vec[low];
    for (int j = 2 * low + 1; j <= high; j = j * 2 + 1) {

    }

}

void Heap_Sort() {

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

    Heap_Sort();

    for(const int num : vec)
        std::cout << num << " ";

    std::cout << std::endl;
    return 0;
}
//
// Created by 62705 on 2025/10/10.
//