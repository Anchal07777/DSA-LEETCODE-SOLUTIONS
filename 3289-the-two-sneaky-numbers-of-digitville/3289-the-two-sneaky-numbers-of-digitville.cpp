class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>freq;
        vector<int> result;
        for(int num:nums){
            freq[num]++;
        }
        for(auto &it:freq){
            if(it.second == 2){
                result.push_back(it.first);
            }
        }
        return result;
    }
};