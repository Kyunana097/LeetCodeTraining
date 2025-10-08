#include <iostream>
#include <algorithm>
#include <vector>

//被调用的逻辑函数
int partition(std::vector<int>& vec, int low, int high) {
    int pivot = vec[high];  //选末位作为基准
    int i = low - 1;        //i是小于基准位的最后一个元素

    for(int j = low; j < high; j++){
        if(vec[j] < pivot){
            i++;
            std::swap(vec[i],vec[j]);
        }
    }
    std::swap(vec[high],vec[i+1]);
    return i+1;
}

//分治法分类函数
void Quick_Sort(std::vector<int>& vec, int low, int high) {
    if(low < high){
        int pi = partition(vec, low, high);
        //调用自身进行递归 直到子数组大小为0或1
        Quick_Sort(vec, low, pi - 1);
        Quick_Sort(vec, pi + 1, high);
    }
}

int main() {
    int x;
    std::vector<int> vec;
    while (std::cin >> x && x != 0)
        vec.push_back(x);

    Quick_Sort(vec, 0, vec.size() - 1);

    for(const int num : vec)
        std::cout << num << " ";

    std::cout << std::endl;
    return 0;
}
//
// Created by 62705 on 2025/10/7.
//