#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/zigzag-conversion/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) {
            return s;
        }
        char c[numRows][1000];
        for(int i = 0; i < numRows; i++) {
            for(int j = 0; j < 1000; j++) {
                c[i][j] = ' ';
            }
        }
        int idx = 0;
        int n = s.size();
        int i = 0;
        int j = 0;
        bool down = true;
        while(idx < n) {
            c[i][j] = s[idx++];
            if(down) {
                if(i+1 == numRows) {
                    down = false;
                    --i;
                    ++j;
                }
                else {
                    ++i;
                }
            }
            else {
                if(i == 0) {
                    down = true;
                    ++i;
                }
                else {
                    --i;
                    ++j;
                }
            }
        }
        string ans = "";
        for(int row = 0; row < numRows; row++) {
            for(int col = 0; col <= j; col++) {
                if(c[row][col] != ' ')
                    ans += c[row][col];
            }
        }
        return ans;
    }
};

int main() {

}