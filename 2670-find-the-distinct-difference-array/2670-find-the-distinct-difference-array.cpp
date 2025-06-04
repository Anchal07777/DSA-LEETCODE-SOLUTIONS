class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> result;
        set<int> left;
        set<int> right;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<=i;j++){
                left.insert(nums[j]);
            }
            for(int k=i+1;k<nums.size();k++){
                right.insert(nums[k]);
            }
            int diff = left.size() - right.size();
            result.push_back(diff);
            left.clear();
            right.clear();
        }
        return result;
    }
};