#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mps;
        unordered_map<char,int> mpt;
        for(char x : s) {
            mps[x]++;
        }
        for(char x : t) {
            mpt[x]++;
        }
        for(pair<char,int> x : mps) {
            if(mpt.find(x.first) == mpt.end() || x.second > mpt[x.first]) {
                mpt[x.first] = x.second;
            }
        }
        string fit = "";
        for(auto &x : mpt) {
            while(x.second > 0) {
                fit += x.first;
                --x.second;
            }
        }
        int ans = 2*fit.size() - s.size() - t.size();
        return ans;
    }
};

int main() {
    
}