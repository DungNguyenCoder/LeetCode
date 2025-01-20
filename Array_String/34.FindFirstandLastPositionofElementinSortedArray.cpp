#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        auto it1 = lower_bound(nums.begin(),nums.end(),target);
        auto it2 = upper_bound(nums.begin(),nums.end(),target);
        if(it1 != nums.end() && nums[it1-nums.begin()] == target) {
            ans.push_back(it1-nums.begin());
            ans.push_back(it2-nums.begin()-1);     
        }
        else {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};

int main() {
    
}