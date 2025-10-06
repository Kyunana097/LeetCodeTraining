#include <iostream>
#include  <algorithm>

int main() {
    int arr[3];
    for (int & i : arr)
        std::cin >> i;

    std::sort(std::begin(arr),std::end(arr));
    for (int & i : arr)
        std::cout << i << " ";

    std::cout << std::endl;
    return 0;
}

//
// Created by 62705 on 2025/10/6.
//