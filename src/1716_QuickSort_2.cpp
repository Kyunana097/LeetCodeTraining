#include <iostream>
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

void QuickSort(std::vector<int>& vec, int low, int high) {
    std::vector<std::pair<int, int>> stack;
    stack.emplace_back(low, high);

    while(!stack.empty()){
        auto [l, h] = stack.back();
        stack.pop_back();

        if(l < h){
            int pi = partition(vec, l, h);

            //先压大再压小
            if(pi + 1 < h)
                stack.emplace_back(pi + 1, h);
            if(l < pi - 1)
                stack.emplace_back(l, pi - 1);
        }
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

    QuickSort(vec, 0, vec.size() - 1);

    for(const int num : vec)
        std::cout << num << " ";

    std::cout << std::endl;
    return 0;
}
//
// Created by 62705 on 2025/10/9.
//