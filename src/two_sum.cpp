#include <iostream>
#include <vector>
#include <unordered_map>
#include <chrono>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int key = nums[i];
            if (mp.find(target - key) != mp.end()) {
                return {mp[target - key], i};
            }
            mp[key] = i;
        }
        return {};
    }

    vector<int> twoSumStupid(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i,j};
                }
            }
        }
        return {};
    }
};


vector<int> v1;
int target = 10;
int main() {
    Solution s;
    for (int i = 0; i <= 100000; i++) {
            v1.push_back(1);
    }
    auto start_fast = std::chrono::high_resolution_clock::now(); // 记录开始时间
    auto x = s.twoSum(v1, target);
    auto end_fast = std::chrono::high_resolution_clock::now();   // 记录结束时间

    std::chrono::duration<double, std::milli> duration = end_fast - start_fast;
    std::cout << "结果是：" << x.size() << std::endl;
    std::cout << "耗时：" << duration.count() << " ms" << std::endl;


    auto start_stupid = std::chrono::high_resolution_clock::now(); // 记录开始时间
    auto x1 = s.twoSumStupid(v1, target);
    auto end_stupid = std::chrono::high_resolution_clock::now();   // 记录结束时间

    std::chrono::duration<double, std::milli> duration1 = end_stupid - start_stupid;
    std::cout << "Stupid结果是：" << x1.size() << std::endl;
    std::cout << "Stupid耗时：" << duration1.count() << " ms" << std::endl;
    return 0;
}