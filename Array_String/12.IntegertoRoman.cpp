#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/integer-to-roman/description/?envType=problem-list-v2&envId=string

void convert(string &ans, int digit, char small, char medium, char large) {
    if(digit == 5-1) {
        ans += small;
        ans += medium;
    }
    else if(digit == 10-1) {
        ans += small;
        ans += large;
    }
    else if(digit < 5-1) {
        for(int i = 0; i < digit; i++) {
            ans += small;
        }
    }
    else if(digit < 10-1) {
        ans += medium;
        for(int i = 0; i < digit-5; i++) {
            ans += small;
        }
    }
}

class Solution {
public:
    string intToRoman(int num) {
        int a[4];
        memset(a,0,sizeof(a));
        string tmp = to_string(num);
        for(int i = 3; i >= 0; i--) {
            if(!tmp.empty()) {
                a[i] = tmp.back()-'0';
                tmp.pop_back();
            }
        }
        string ans = "";
        if(a[0] != 0) {
            for(int i = 0; i < a[0]; i++)
                ans += 'M';
        }
        if(a[1] != 0) {
            convert(ans,a[1],'C','D','M');
        }
        if(a[2] != 0) {
            convert(ans,a[2],'X','L','C');
        }
        if(a[3] != 0) {
            convert(ans,a[3],'I','V','X');
        }
        return ans;
    }
};

int main() {
    
}