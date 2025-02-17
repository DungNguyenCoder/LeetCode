#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/decode-string/?envType=problem-list-v2&envId=string


class Solution {
    public:
        string decodeString(string s) {
            stack<int> numStack;
            stack<string> strStack;
            string curStr = "";
            int curNum = 0;
            for(char c : s) {
                if(isdigit(c)) {
                    curNum = curNum * 10 + (c - '0');
                }
                else if(c == '[') {
                    numStack.push(curNum);
                    strStack.push(curStr);
                    curStr = "";
                    curNum = 0;
                }
                else if(c == ']') {
                    int repeat = numStack.top();
                    numStack.pop();
                    string tmp = strStack.top();
                    strStack.pop();
                    for (int i = 0; i < repeat; i++) {
                        tmp += curStr;
                    }
                    curStr = tmp;
                }
                else {
                    curStr += c;
                }
            }
            return curStr;
        }
    };

int main() {
    
}