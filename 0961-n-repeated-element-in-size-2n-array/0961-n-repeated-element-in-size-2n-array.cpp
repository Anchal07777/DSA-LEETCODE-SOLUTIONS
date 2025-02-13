class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int size = nums.size();
        int ans = 0;
        map<int,int> f;
        for(int i=0;i<size;i++){
            f[nums[i]]++;
        }
        for(auto pair:f){
            if(pair.second == (size/2)){
                ans = pair.first;
                break;
            }
        }
        return ans;
    }
};