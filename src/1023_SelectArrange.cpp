#include <iostream>
#include <algorithm>

void SelectionSort(int a[],int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minPos = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[minPos])
                minPos = j;
        }
        if (minPos!=i)
            std::swap(a[i],a[minPos]);
    }
}

int main() {
    int array[10];
    for (int & x : array)
        std::cin >> x;
    SelectionSort(array,10);
    for (int & i : array)
        std::cout << i << std::endl;
    return 0;
}
//
// Created by 62705 on 2025/10/6.
//