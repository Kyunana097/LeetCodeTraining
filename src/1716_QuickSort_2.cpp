#include <iostream>
#include <vector>
#include <algorithm>

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

void QuickSort(std::vector<int>& vec, int low, int high) {

}

int main() {

    return 0;
}
//
// Created by 62705 on 2025/10/9.
//