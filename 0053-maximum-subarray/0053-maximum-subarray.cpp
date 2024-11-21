class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];  
        int currentSum = 0;   

        for (int num : nums) {
            currentSum += num;
            maxSum = max(maxSum, currentSum);
            if (currentSum < 0) {
                currentSum = 0;
            }
        }

        return maxSum;
    }