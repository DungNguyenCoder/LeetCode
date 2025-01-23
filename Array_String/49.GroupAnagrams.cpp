#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/group-anagrams/description/?envType=problem-list-v2&envId=array

bool cmp(const pair<string,string> &a, const pair<string,string> &b) {
    return a.second < b.second;
}

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<pair<string,string>> words;
        for(int i = 0; i < n; i++) {
            pair<string,string> tmp;
            tmp.first = strs[i];
            tmp.second = strs[i];
            sort(tmp.second.begin(),tmp.second.end());            
            words.push_back(tmp);
        }
        sort(words.begin(),words.end(),cmp);
        vector<vector<string>> ans;
        vector<string> tmp;
        tmp.push_back(words[0].first);
        for(int i = 1; i < n; i++) {
            if(words[i].second == words[i-1].second) {
                tmp.push_back(words[i].first);
            }
            else {
                ans.push_back(tmp);
                tmp.clear();
                tmp.push_back(words[i].first);
            }
        }
        ans.push_back(tmp);
        return ans;
    }
};

int main() {
    
}