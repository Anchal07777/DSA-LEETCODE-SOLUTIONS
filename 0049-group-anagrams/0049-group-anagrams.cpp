#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>anagramGroups;
        for(string s:strs){
            string key = s;
            sort(key.begin(),key.end());
            anagramGroups[key].push_back(s);
        }
        vector<vector<string>> result;
        for(auto group:anagramGroups){
            result.push_back(group.second);
        }

        return result;
    }
};
