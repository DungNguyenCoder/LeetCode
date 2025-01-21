#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/valid-sudoku/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    int isValidSudoku(vector<vector<char>>& board) {
        map<char,int> largeHorizontalRow;
        map<char,int> largeVerticalRow;
        map<char,int> smallSquare;
        int I = 0, J = 0;
        while(I < 9) {
            J = 0;
            while(J < 9) {
                for(int k = I; k < I+3; k++) {
                    for(int l = J; l < J+3; l++) {
                        if(board[k][l] != '.') {
                            smallSquare[board[k][l]]++;
                        }
                        if(smallSquare[board[k][l]] == 2) {
                            return false;
                        }
                    }
                }
                smallSquare.clear();
                J += 3;
            }
            I += 3;
        }
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.') {
                    largeHorizontalRow[board[i][j]]++;
                }
                if(largeHorizontalRow[board[i][j]] == 2) {
                    return false;
                }
            }
            largeHorizontalRow.clear();
        }
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[j][i] != '.') {
                    largeVerticalRow[board[j][i]]++;
                }
                if(largeVerticalRow[board[j][i]] == 2) {
                    return false;
                }
            }
            largeVerticalRow.clear();
        }
        return true;
    }
};

int main() {
    
}