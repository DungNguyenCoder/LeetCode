#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/?envType=problem-list-v2&envId=string

char letter[10][4] = {  {},
                        {},
                        {'a','b','c'},
                        {'d','e','f'},
                        {'g','h','i'},
                        {'j','k','l'},
                        {'m','n','o'},
                        {'p','q','r','s'},
                        {'t','u','v'},
                        {'w','x','y','z'}};

void Try(vector<string> &ans, string &tmp, int i, string digits) {
    if(i == digits.size()) {
        ans.push_back(tmp);
        return;
    }
    int digit = digits[i] - '0';
    int letterCnt = 3;
    if(digit == 7 || digit == 9)
        letterCnt = 4;
    for(int j = 0; j < letterCnt; j++) {
        tmp.push_back(letter[digit][j]);
        Try(ans,tmp,i+1,digits);
        tmp.pop_back();
    }
}

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        int n = digits.size();
        if(digits.empty())
            return ans;
        string tmp = "";
        Try(ans,tmp,0, digits);
        return ans;
    }
};

int main() {

}