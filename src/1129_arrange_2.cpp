#include <iostream>
#include  <algorithm>

int main() {
    int arr[10];
    for (int & i : arr)
        std::cin >> i;

    std::sort(std::begin(arr),std::end(arr));
    std::reverse(std::begin(arr),std::end(arr));
    for (const int & x : arr)
        std::cout << x << " ";

    std::cout << std::endl;
    return 0;
}
//
// Created by 62705 on 2025/10/6.
//