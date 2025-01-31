#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/longest-palindromic-substring/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty())
            return "";
        int n = s.size();
        bool dp[n][n];
        memset(dp,false,sizeof(dp));
        for(int i = 0; i < n; i++) {
            dp[i][i] = true;
        }
        int ans = 1;
        int l = 0;
        int r = 0;
        for(int len = 2; len <= n; len++) {
            for(int i = 0; i <= n-len; i++) {
                int j = i + len - 1;
                if(len == 2 && s[i] == s[j]) {
                    dp[i][j] = true;
                }
                else {
                    dp[i][j] = dp[i+1][j-1] && (s[i] == s[j]);
                }
                if(dp[i][j] && len > ans) {
                    ans = len;
                    l = i;
                    r = j;
                }
            }
        }
        return s.substr(l,ans);
    }
};

int main() {
    
}