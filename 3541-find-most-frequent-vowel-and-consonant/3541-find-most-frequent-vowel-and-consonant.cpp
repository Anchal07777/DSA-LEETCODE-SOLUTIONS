class Solution {
public:
    int maxFreqSum(string s) {
        map<int,int> f;
        map<int,int> v;
        vector<int> vowels = {1,5,9,15,21};
        for(auto& ch:s){
            if(find(vowels.begin(),vowels.end(),(ch-'a'+1)) != vowels.end()){
                v[ch-'a'+1]++;
            }
            else{
            f[ch-'a'+1]++;}
        }
        
        int m = 0;
        for(auto &pair:f){
            if(pair.second > m){
                m = pair.second;
                
            }
        }
        int m1 = 0;
        for(auto &pair:v){
            if(pair.second > m1){
                m1 = pair.second;
               
            }
        }
        return m1+m;
    }
};