#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/reverse-words-in-a-string/description/?envType=problem-list-v2&envId=string

class Solution {
    public:
        string reverseWords(string s) {
            string token;
            stringstream ss(s);
            string ans = "";
            vector<string> v;
            while(ss >> token) {
                v.push_back(token);
            }
            for(int i = v.size()-1; i >= 0; i--) {
                ans += v[i] + " ";
            }
            ans.pop_back();
            return ans;
        }
    };

int main() {
    
}