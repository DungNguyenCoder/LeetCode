#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/spiral-matrix-ii/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n,0));
        int top = 0, bottom = n-1;
        int left = 0, right = n-1;
        int cnt = 1;
        while(top <= bottom && left <= right) {
            for(int i = left; i <= right; i++) {
                ans[top][i] = cnt++;
            }
            ++top;
            for(int i = top; i <= bottom; i++) {
                ans[i][right] = cnt++;
            }
            --right;
            for(int i = right; i >= left; i--) {
                ans[bottom][i] = cnt++;
            }
            --bottom;
            for(int i = bottom; i >= top; i--) {
                ans[i][left] = cnt++;
            }
            ++left;
        }
        return ans;
    }
};

int main() {
    
}