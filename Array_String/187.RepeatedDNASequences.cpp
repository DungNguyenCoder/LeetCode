#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/repeated-dna-sequences/description/?envType=problem-list-v2&envId=string

class Solution {
    public:
        vector<string> findRepeatedDnaSequences(string s) {
            vector<string> ans;
            if(s.size() < 10) {
                return ans;
            }
            vector<string> DNA;
            unordered_map<string,int> mp;
            string tmp = "";
            int n = s.size();
            tmp = s.substr(0,10);
            DNA.push_back(tmp);
            for(int i = 1; i < n-10+1; i++) {
                tmp.erase(tmp.begin());
                tmp.push_back(s[i+10-1]);
                DNA.push_back(tmp);
            }
            for(int i = 0; i < DNA.size(); i++) {
                mp[DNA[i]]++;
            }
            for(auto x : mp) {
                if(x.second > 1) {
                    ans.push_back(x.first);
                }
            }
            return ans;
        }
    };

int main() {
    
}