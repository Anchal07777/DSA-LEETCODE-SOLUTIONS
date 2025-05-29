class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> s;
        int maxL = 0;
        unordered_map<int,int> f;
        for(int i=0;i<rectangles.size();i++){
            int m = min(rectangles[i][0],rectangles[i][1]);
            s.push_back(m);
        }
        for(int i=0;i<s.size();i++){
            maxL = max(maxL,s[i]);
            f[s[i]]++;
        }
        return f[maxL];
    }
};