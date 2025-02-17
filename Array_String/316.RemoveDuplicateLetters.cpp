#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/remove-duplicate-letters/description/?envType=problem-list-v2&envId=string

class Solution {
    public:
        string removeDuplicateLetters(string s) {
            unordered_map<char, int> mp;
            stack<char> tmp;
            unordered_set<char> se;
            for(const char &x : s) {
                mp[x]++;
            }
            for(const char &x : s) {
                --mp[x];
                if(se.count(x)) {
                    continue;
                }
                while(!tmp.empty() && x < tmp.top() && mp[tmp.top()] > 0) {
                    se.erase(tmp.top());
                    tmp.pop();
                }
                tmp.push(x);
                se.insert(x);
            }
            string ans = "";
            while(!tmp.empty()) {
                ans += tmp.top();
                tmp.pop();
            }
            reverse(ans.begin(), ans.end());
            return ans;
        }
    };

int main() {
    
}