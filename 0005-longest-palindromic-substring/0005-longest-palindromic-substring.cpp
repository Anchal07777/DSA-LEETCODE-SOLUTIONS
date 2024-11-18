class Solution {
public:
    string longestPalindrome(string s) {

        string ans="";
        for(int i=0;i<s.size();i++){
            string p ="";
            for(int j = i;j<s.size();j++){
                p+=s[j];
                bool flag = true;
                for(int  k=0;k<p.size()/2;k++){
    
                    if(p[k] != p[p.size()-k-1]){
                        flag = false;
                        break;
                    }
                }
            if(flag && p.size()>ans.size()){
                ans = p;
            }
            }
            
        }
        return ans;


    }
};