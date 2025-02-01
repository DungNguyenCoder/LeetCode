#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/string-to-integer-atoi/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;
        bool negativeNum = false;
        long long num = 0;
        while(i < n && s[i] == ' ')
            ++i;
        if(i == n)
            return 0;
        if(s[i] == '-') {
            negativeNum = true;
            ++i;
        }
        else if(s[i] == '+') {
            ++i;
        }
        while(i < n && isdigit(s[i])) {
            num = num*10 + (s[i]-'0');
            if(!negativeNum && num > INT_MAX) {
                return INT_MAX;
            }
            else if(negativeNum && num > (long long)INT_MAX+1) {
                return INT_MIN;
            }
            ++i;
        }
        if(negativeNum) {
            return num*-1;
        }
        return num;
    }
};

int main() {
    
}