#include <iostream>
#include <vector>


void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void bubble_sort(std::vector<int>& vec) {
    int count = 0;
    for (int i = 0; i < vec.size(); i++) {
        bool swapped = false;
        for (int j = 0; j < vec.size() - count - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
        count++;
    }
}

int main() {
    std::vector<int> vec;
    int n = 10;
    for (int i = 0; i < n; ++i) {
        vec.push_back(std::rand() % 100);
    }
    printArray(vec);
    bubble_sort(vec);
    printArray(vec);
}