#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/longest-substring-without-repeating-characters/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        int r = 0;
        int maxSubString = 0;
        unordered_map<char,int> mp;
        while(r < n) {
            mp[s[r]]++;
            while(mp[s[r]] > 1) {
                mp[s[l]]--;
                ++l;
            }
            maxSubString = max(maxSubString,r-l+1);
            ++r;
        }
        return maxSubString;
    }
};

int main() {
    
}