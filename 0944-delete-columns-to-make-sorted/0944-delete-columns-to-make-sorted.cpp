class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int c =0;
        set<int> r;
        for(int i=0;i<strs.size()-1;i++){
            for(int j = 0;j<strs[0].size();j++){
                if(strs[i][j] > strs[i+1][j]){
                    r.insert(j);
                }
            }
        }
        return r.size();
    }
};