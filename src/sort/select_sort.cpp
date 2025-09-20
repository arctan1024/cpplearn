#include <iostream>
#include <vector>
#include <chrono>
#include <random>
using namespace std;

void select_sort(vector<int>& nums) {
    int minIndex, temp;
    for (int i = 0; i < nums.size(); i++) {
        minIndex = i;
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }
        temp = nums[i];
        nums[i] = nums[minIndex];
        nums[minIndex] = temp;
    }
}

int main() {
    vector<int> vec;
    int N = 30000;
    std::mt19937 rng(static_cast<unsigned>(time(0))); // 用当前时间作为种子
    std::uniform_int_distribution<int> dist(0, 1000);
    for (int i = 0; i < N; ++i) {
        vec.push_back(dist(rng));
    }

    auto start_fast = std::chrono::high_resolution_clock::now();
    select_sort(vec);
    auto end_fast = std::chrono::high_resolution_clock::now();
    auto time = chrono::duration_cast<std::chrono::milliseconds>(end_fast - start_fast);
    for (int i = 0; i < 20; ++i) { // 只输出前20个元素
        cout << vec[i] << ",";
    }
    cout << endl;
    cout << "耗时：" << time.count() << " ms" << endl;
}