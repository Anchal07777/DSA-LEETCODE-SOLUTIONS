class Solution {
public:
    string convert(string s, int n) {
        if(n==1 || n == s.size()){
            return s;
        }
        int r = 0;
        bool down  =  false;
        vector<string> rows(n);
        for(char ch:s){
            rows[r] +=ch;
            if( (r == 0) || (r== n-1)){
                down =!down;
            }
            (down == true)?r++:r--;
        }
        string result = "";
        for(string ch:rows){
            result += ch;
        }
        return result;

    }
};