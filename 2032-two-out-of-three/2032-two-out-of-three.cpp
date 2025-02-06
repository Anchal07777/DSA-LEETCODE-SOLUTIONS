class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int> n1(nums1.begin(),nums1.end());
        unordered_set<int> n2(nums2.begin(),nums2.end());
        unordered_set<int> n3(nums3.begin(),nums3.end());
        map<int,int> count;
        for(int num:n1){
            count[num]++;
        }
        for(int num:n2){
            count[num]++;
        }
        for(int num:n3){
            count[num]++;
        }
        vector<int> result;
        for(auto it:count){
            if(it.second >=2){
                result.push_back(it.first);
            }
        }
        return result;
        
    }
};