class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char,int> m ={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
       };
       int t=0,p=0;
       for(auto &ch:s){
        int v =m[ch];
        if(p < v){
            t += v - 2*p;
        }
        else{
            t += v;
        }
        p=v;
        
       }
      return t; 
    }
};