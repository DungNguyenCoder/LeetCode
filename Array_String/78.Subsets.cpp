#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/subsets/description/?envType=problem-list-v2&envId=array

void Try(vector<vector<int>> &ans, vector<int> nums, vector<int> &tmp, int start) {
    for(int j = start; j < nums.size(); j++) {
        tmp.push_back(nums[j]);
        ans.push_back(tmp);
        Try(ans,nums,tmp,j+1);
        tmp.pop_back();
    }
}
    
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmp;
        ans.push_back(vector<int>());
        Try(ans,nums,tmp,0);
        return ans;
    }
};

int main() {
    
}