#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/count-and-say/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        for(int i = 1; i < n; i++) {
            string next = "";
            int cnt = 1;
            for(int j = 1; j < res.size(); j++) {
                if(res[j] == res[j-1]) {
                    ++cnt;
                }
                else {
                    next += to_string(cnt) + res[j-1];
                    cnt = 1;
                }
            }
            next += to_string(cnt) + res.back();
            res = next;
        }
        return res;
    }
};

int main() {
    
}