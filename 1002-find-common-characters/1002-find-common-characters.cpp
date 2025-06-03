class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        bool flag  = true;
        vector<string> result;
        string s = " ";
        for(auto& ch:words[0]){
            flag = true;
            for(int i = 1;i<words.size();i++){
                int pos = words[i].find(ch);
                if(pos==string::npos){
                    flag = false;
                    break;
                }
                else{
                    words[i].erase(pos,1);
                }
            }
            if(flag){
                s=ch;
                result.push_back(s);
            }
           
        }
        return result;
    }
};