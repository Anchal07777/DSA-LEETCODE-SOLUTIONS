class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int> t,a;
        for(auto &num:target){
            t[num]++;
        }
        for(auto &num:arr){
            a[num]++;
        }
        for(auto &pair:t ){
            if(a[pair.first] !=pair.second){
                return false;
            }
            
        }
        return true;
    }
};