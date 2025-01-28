#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/word-search/description/?envType=problem-list-v2&envId=array

bool Try(vector<vector<char>> &board, string word, int idx, int i, int j) {
    if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[idx]) {
        return false;
    }

    if(idx == word.size()-1) {
        return true;
    }

    board[i][j] = '0';

    bool bfs = Try(board,word,idx+1,i+1,j) || Try(board,word,idx+1,i,j+1) || Try(board,word,idx+1,i-1,j) || Try(board,word,idx+1,i,j-1);
    board[i][j] = word[idx];
    return bfs;
}

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(board[i][j] == word[0]) {
                    if(Try(board,word,0,i,j)) {
                        return true;
                    }
                }
            }
        }
        return false;
    } 
};

int main() {
    
}