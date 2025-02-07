#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/count-substrings-with-k-frequency-characters-i/description/?envType=problem-list-v2&envId=string

class Solution {
    public:
        int numberOfSubstrings(string s, int k) {
            unordered_map<char,int> mp;
            int n = s.size();
            int ans = 0;
            int left =  0, right = 0;
            while(right < n) {
                mp[s[right]]++;
                while(mp[s[right]] == k) {
                    ans += (n-right);
                    mp[s[left]]--;
                    ++left;
                }
                ++right;
            }
            return ans;
        }
    };

int main() {
    
}