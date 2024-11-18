class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> chars;
        int maxLength = 0;
        int left = 0;
        for(int right = 0 ; right < s.size();right++){
            while(chars.find(s[right]) != chars.end()){
                chars.erase(s[left]);
                left++;
            }
            chars.insert(s[right]);
            maxLength  = max(maxLength,right-left+1);
        }
        return maxLength;
    }
};