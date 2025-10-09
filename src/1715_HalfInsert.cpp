#include <iostream>
#include <vector>

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
    //折半插入排序
    for(int i = 1; i < Num; ++i){
        const int key = vec[i];
        int j = i - 1;
        int low = 0, high = i - 1;
        //将vec[i]插到正确的地方
        while (low <= high) {
            int m = (low + high) / 2;
            if (key < vec[m])
                high = m - 1;
            else low = m + 1;
        }
        //将大于vec[i]的数往后挪 为vec[i]腾出位置
        for (; j >= high + 1; --j)
            vec[j + 1] = vec[j];

        //把key放到正确的位置
        vec[j + 1] = key;
    }

    for(const int &i : vec)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
//
// Created by 62705 on 2025/10/9.
//