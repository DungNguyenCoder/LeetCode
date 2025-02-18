#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/basic-calculator-ii/?envType=problem-list-v2&envId=string

class Solution {
    public:        
        int calculate(string s) {
            int n = s.size();
            stack<int> num;
            int curNum = 0;
            char lastOp = '+';

            for (int i = 0; i < n; i++) {
                char ch = s[i];
                if(isdigit(ch)) {
                    curNum = curNum * 10 + (ch - '0');
                }
                if((!isdigit(ch) && ch != ' ') || i == n-1) {
                    if(lastOp == '+') {
                        num.push(curNum);
                    }
                    else if(lastOp == '-') {
                        num.push(-curNum);
                    }
                    else if(lastOp == '*') {
                        int top = num.top();
                        num.pop();
                        num.push(top * curNum);
                    }
                    else if(lastOp == '/') {
                        int top = num.top();
                        num.pop();
                        num.push(top / curNum);
                    }
                    curNum = 0;
                    lastOp = ch;    
                }
            }

            int ans = 0;
            while (!num.empty()) {
                ans += num.top();
                num.pop();
            }
            return ans;
        }
    };

int main() {
    
}