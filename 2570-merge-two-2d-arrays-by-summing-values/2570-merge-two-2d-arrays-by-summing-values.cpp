class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map<int,int> f;
        for(int i=0;i<items1.size();i++){
            f[items1[i][0]] += items1[i][1];
        }
        for(int i=0;i<items2.size();i++){
            f[items2[i][0]] += items2[i][1];
        }
        vector<pair<int,int>> vec(f.begin(),f.end());
        vector<vector<int>> result;
        sort(vec.begin(),vec.end(),[](const pair<int,int> &a,const pair<int,int> &b){
            return a.first < b.first;
        });
        for(auto& pair:vec){
            result.push_back({pair.first,pair.second});
        }
        return result;
    }
};