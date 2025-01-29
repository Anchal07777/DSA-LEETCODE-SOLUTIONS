class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> d;
        int n = 97;
        string ans;
        for(char c:key){
            if(c !=' ' && d.find(c)==d.end()){
               d[c] = char(n++);
            }
            if(n>122)break;
        }
        for(char ch: message){
            if(ch==' '){
                ans += ' ';

            }
            else{
            ans += d[ch];
            }
        }
        
        return ans;
    }
};