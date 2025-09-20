#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>
using namespace std;

// 交换两个元素
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// 分区函数
int partition(std::vector<int>& arr, int low, int high) {
    // 选择最右边的元素作为主元（pivot）
    int pivot = arr[high];
    // i 是较小元素所在位置的索引
    int i = (low - 1);

    for (int j = low; j < high; ++j) {
        // 如果当前元素小于或等于主元
        if (arr[j] <= pivot) {
            i++;
            // 交换 arr[i] 和 arr[j]
            swap(arr[i], arr[j]);
        }
    }
    // 交换主元和 i+1 位置的元素
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// 快速排序主函数
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        // pi 是分区后的索引，arr[pi] 现在的元素在正确的位置上
        int pi = partition(arr, low, high);

        // 递归地对分区前后的子数组进行排序
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// 打印数组
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    vector<int> vec;
    int N = 300000;
    std::mt19937 rng(static_cast<unsigned>(time(0))); // 用当前时间作为种子
    std::uniform_int_distribution<int> dist(0, 1000);
    for (int i = 0; i < N; ++i) {
        vec.push_back(dist(rng));
    }

    auto start_fast = std::chrono::high_resolution_clock::now();
    quickSort(vec, 0, vec.size() - 1);
    auto end_fast = std::chrono::high_resolution_clock::now();
    auto time = chrono::duration_cast<std::chrono::milliseconds>(end_fast - start_fast);
    for (int i = 0; i < 20; ++i) { // 只输出前20个元素
        cout << vec[i] << ",";
    }
    cout << endl;
    cout << "耗时：" << time.count() << " ms" << endl;
}