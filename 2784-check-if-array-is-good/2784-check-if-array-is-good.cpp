#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

class Solution {
public:
    bool isGood(std::vector<int>& nums) {
        std::map<int, int> freq;

        // Count frequencies of each element in the array
        for (int num : nums) {
            freq[num]++;
        }

        // Sort the array to check the order and expected pattern
        std::sort(nums.begin(), nums.end());

        // Check the last element occurs exactly twice
        if (freq[nums[nums.size() - 1]] != 2) {
            return false;
        }

        // Check if all other elements from 1 to n-1 appear exactly once
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] != i + 1) {  // The sorted array should contain 1 to n-1 in order
                return false;
            }
        }

        return true;
    }
};
