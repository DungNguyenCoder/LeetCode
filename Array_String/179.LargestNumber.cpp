#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/largest-number/description/?envType=problem-list-v2&envId=string

bool cmp(const int &a, const int &b) {
    string a1 = to_string(a);
    string b1 = to_string(b);
    if(a1.size() == b1.size())
        return a1 > b1;
    else
        return a1+b1 > b1+a1;
}

class Solution {
    public:
        string largestNumber(vector<int>& nums) {
            sort(nums.begin(),nums.end(),cmp);
            string ans = "";
            for(int x : nums) {
                ans += to_string(x);
            }
            if(ans.front() == '0')
                ans = "0";
            return ans;
        }
    };

int main() {
    
}