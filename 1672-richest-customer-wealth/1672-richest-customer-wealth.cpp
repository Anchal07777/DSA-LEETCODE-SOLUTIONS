class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0,res = 0;
        for(int i=0;i<accounts.size();i++){
            ans = 0;
           
            for(int j=0;j<accounts[0].size();j++){
                ans += accounts[i][j];
            }
             res = max(res,ans);
        }
        return res;
    }
};