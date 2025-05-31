class Solution {
public:
    long long pickGifts(vector<int>& nums, int k) {
        long long sum = 0;
        int n = nums.size();
        while(k--){
            sort(nums.begin(),nums.end());
            nums[n-1] = floor(sqrt(nums[n-1]));
            cout<<nums[0]<<" ";
        }
        
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        return sum;
    }
};