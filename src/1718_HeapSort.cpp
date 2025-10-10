#include <iostream>
#include <vector>

void HeapAdjust(std::vector<int>& vec, int low, int high) {
    int rc = vec[low];
    for (int j = 2 * low + 1; j <= high; j = j * 2 + 1) {
        //当前选中左孩子 若左孩子小则要换成右孩子
        if (j < high && vec[j] < vec[j + 1])
            ++j;
        //rc位置正确 则退出
        if (vec[j] <= rc)
            break;
        vec[low] = vec[j];      //孩子上浮
        low = j;        //继续筛选
    }
    vec[low] = rc;
}

void Heap_Sort(std::vector<int>& vec) {
    int n = vec.size();
    if (n < 2)
        return;

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

    Heap_Sort(vec);

    for(const int num : vec)
        std::cout << num << " ";

    std::cout << std::endl;
    return 0;
}
//
// Created by 62705 on 2025/10/10.
//