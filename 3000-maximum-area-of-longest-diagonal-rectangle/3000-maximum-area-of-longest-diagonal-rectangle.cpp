class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        float ans = 0;
        int a=0;
        for(int i=0;i<d.size();i++){
            float c = d[i][0]*d[i][0] + d[i][1]*d[i][1];
            
            if(c > ans){
                ans = c;
                a=d[i][0]*d[i][1];
            }
            else if(c==ans){
                a=max(a,d[i][0]*d[i][1]);
            }
        }
       
        return a;
        
    }
};