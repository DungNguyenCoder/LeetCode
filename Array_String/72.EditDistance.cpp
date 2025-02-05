#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/edit-distance/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        int base = 0;
        for(int i = n; i >= 0; i--) {
            dp[i][m] = base++;
        }
        base = 0;
        for(int i = m; i >= 0; i--) {
            dp[n][i] = base++;
        }
        for(int i = n-1; i >= 0; i--) {
            for(int j = m-1; j >= 0; j--) {
                if(word1[i] == word2[j]) {
                    dp[i][j] = dp[i+1][j+1];
                }
                else {
                    dp[i][j] = min(dp[i+1][j+1],min(dp[i+1][j],dp[i][j+1])) + 1;
                }
            }
        }
        return dp[0][0];
    }
};

int main() {
    
}