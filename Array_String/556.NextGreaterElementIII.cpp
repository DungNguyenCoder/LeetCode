#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/next-greater-element-iii/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    int nextGreaterElement(int n) {
        int ans = -1;
        string s = to_string(n);
        if(next_permutation(s.begin(),s.end()) && stoll(s) <= INT_MAX) {
            ans = stoi(s);
        }
        return ans;
    }
};

int main() {
    
}