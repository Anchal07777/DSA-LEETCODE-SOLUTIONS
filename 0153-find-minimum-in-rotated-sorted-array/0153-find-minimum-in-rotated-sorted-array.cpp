class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size()-1,mid;
        if(nums.size()== 1)return nums[0];
        while(left<right){        
            if(nums[left] < nums[right]){
                return nums[left];
            }
            mid = (left  + right)/2;
            if(nums[mid] > nums[right]){
                left = mid + 1;
            }
            else{
                right = mid;
            }
            
        }
        return nums[left];
    }
};