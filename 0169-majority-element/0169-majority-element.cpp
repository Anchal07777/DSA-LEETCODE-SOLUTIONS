class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(int ch:nums){
            ans[ch]++;
        }
        int c = 0 ;
        int n = nums.size()/2;
        for(auto pair:ans){
            if(pair.second > n){
                c = pair.first;
                break;
            }
        }
        return c;

    }
};