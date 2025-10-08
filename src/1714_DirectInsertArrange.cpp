#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int Num;
    std::vector<int> vec;
    std::cin >> Num;
    if(Num <= 0)
        return -1;
    int x;
    for(int i = 0; i < Num; i++){
        std::cin >> x;
        vec.push_back(x);
    }

    //std::sort(vec.begin(), vec.end());
    //直接插入排序
    for(int i = 1; i < Num; ++i){
        int key = vec[i];
        int j = i - 1;

        //将vec[i]插到正确的地方
        //将大于vec[i]的数往后挪 为vec[i]腾出位置
        while(j >=0 && vec[j] > key){
            vec[j + 1] = vec[j];
            --j;
        }
        //把key放到正确的位置
        vec[j + 1] = key;
    }

    for(const int &i : vec)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
//
// Created by kyunana on 2025/10/8.
//
