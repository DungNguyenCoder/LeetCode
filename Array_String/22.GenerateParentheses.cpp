#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/generate-parentheses/description/?envType=problem-list-v2&envId=string

char parenthesis[2] = {'(',')'};

void Try(vector<string> &ans, string &tmp, int n, int cntOpen, int cntClose) {
    if(tmp.size() == 2*n) {
        ans.push_back(tmp);
        return;
    }
    if(cntOpen < n) {
        tmp.push_back(parenthesis[0]);
        Try(ans,tmp,n,cntOpen+1,cntClose);
        tmp.pop_back();
    }
    if(cntClose < cntOpen) {
        tmp.push_back(parenthesis[1]);
        Try(ans,tmp,n,cntOpen,cntClose+1);
        tmp.pop_back();
    }
}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string tmp = "";
        Try(ans,tmp,n,0,0);
        return ans;
    }
};

int main() {
    
}