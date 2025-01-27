#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/search-a-2d-matrix/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        for(int i = 0; i < m; i++) {
            if(binary_search(matrix[i].begin(),matrix[i].end(),target)) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    
}