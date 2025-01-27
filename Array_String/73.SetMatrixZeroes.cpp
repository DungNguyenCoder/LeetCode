#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/set-matrix-zeroes/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> horizontalZero;
        set<int> verticalZero;
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == 0) {
                    horizontalZero.insert(i);
                    verticalZero.insert(j);
                }
            }
        }
        for(int i = 0; i < matrix.size(); i++) {
            if(horizontalZero.find(i) != horizontalZero.end()) {
                for(int j = 0; j < matrix[0].size(); j++) {
                    matrix[i][j] = 0;
                }
            }
        }
        for(int j = 0; j < matrix[0].size(); j++) {
            if(verticalZero.find(j) != verticalZero.end()) {
                for(int i = 0; i < matrix.size(); i++) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main() {
    
}