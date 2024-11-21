class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int c = 0, ms = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i != 0 && nums[i] <= nums[i - 1]) {
                c = 0;
            }
            c += nums[i];
            ms = max(ms, c);
        }
        return ms;
    }
};