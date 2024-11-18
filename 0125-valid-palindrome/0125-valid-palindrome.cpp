class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(auto c: s){
            if(isalnum(c)){
                str.push_back(tolower(c));
            }
        }
        if(str.empty())return true;
        auto temp  = str;
        reverse(temp.begin(),temp.end());
        return (str == temp);
    }
};