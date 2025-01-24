#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/spiral-matrix/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int height = matrix.size();
        int length = matrix[0].size();
        int top = 0, bottom = height - 1;
        int left = 0, right = length - 1;
        while(top <= bottom && left <= right) {
            for(int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            ++top;

            for(int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            --right;

            if(top <= bottom) {
                for(int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                --bottom;
            }

            if(left <= right) {
                for(int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                ++left;
            }
        }
        return ans;
    }
};

int main() {
    
}