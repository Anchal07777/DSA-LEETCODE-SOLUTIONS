class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> result;
        map<int,int> f;
        int n = nums.size();
       
        for(int i = 0;i<n;i++){
            for(int j = 0;j<nums[i].size();j++){
                int n = nums[i][j];
                f[n]++;
            }
        }
        
        for(auto &pair: f){
            if(pair.second==n){
                result.push_back(pair.first);
            }
        }
        return result;
    }
};