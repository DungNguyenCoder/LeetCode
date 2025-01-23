#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/rotate-image/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        int ans[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                ans[i][j] = matrix[n-1-j][i];
            }
        }
        matrix.clear();
        for(int i = 0; i < n; i++) {
            vector<int> row;
            for(int j = 0; j < n; j++) {
                row.push_back(ans[i][j]);
            }
            matrix.push_back(row);
        }
    }
};

int main() {
    
}