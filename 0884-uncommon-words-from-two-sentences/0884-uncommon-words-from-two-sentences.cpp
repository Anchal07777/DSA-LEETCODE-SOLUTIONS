class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> f;
        vector<string> result;
        stringstream ss(s1);
        stringstream sb(s2);
        string w1,w2;
        while(ss >> w1){
            f[w1]++;
        }
        while(sb >> w2){
            f[w2]++;
        }
       
        for(auto& pair:f){
            if(pair.second == 1){
                result.push_back(pair.first);
            }
        }
        return result;
    }
};