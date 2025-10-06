#include <iostream>
#include <vector>

int main() {
    int n;
    if (!(std::cin >> n))
        return 0;

    std::vector<bool> alive(n,true);        //可变数组
    int survivors = n;
    int idx = 0;
    int cnt = 0;

    while (survivors > 1) {
        if (alive[idx]) {
            ++cnt;
            if (cnt == 3) {
                alive[idx] = false;
                --survivors;
                cnt = 0;
            }
        }
        idx = (idx + 1) % n;        //回绕 将+1和循环合并
    }

    for (int i = 0; i < n; ++i) {
        if (alive[i]) {
            std::cout << i + 1 << std::endl;
            break;
        }
    }

    return 0;
}
//
// Created by 62705 on 2025/10/6.
//