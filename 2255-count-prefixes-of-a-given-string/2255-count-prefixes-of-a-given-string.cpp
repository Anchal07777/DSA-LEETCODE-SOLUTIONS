class Solution {
public:
    int countPrefixes(vector<string>& w, string s) {
        int c=0;
        for(int i=0;i<w.size();i++){
            if(s.find(w[i]) == 0)c++;
        }
        return c;
    }
};