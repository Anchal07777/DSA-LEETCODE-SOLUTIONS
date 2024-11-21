class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int a = 0;
        for(int i = 0;i<s.size();i++){
            a+= abs(i-static_cast<int>(t.find(s[i])));
        }
        return a;
    }
};