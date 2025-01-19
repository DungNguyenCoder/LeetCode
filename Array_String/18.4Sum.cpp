#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/4sum/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        set<vector<int>> se;
        for(int i = 0; i < n-3; i++) {
            for(int j = i+1; j < n-2; j++) {
                int l = j+1;
                int r = n-1;
                while(l < r) {
                    long long sum = 1ll*nums[i] + nums[j] + nums[l] + nums[r];
                    if(sum == target) {
                        vector<int> v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[l]);
                        v.push_back(nums[r]);
                        se.insert(v);
                        ++l;
                        --r;
                    }
                    else if(sum < target)
                        ++l;
                    else
                        --r;
                }
            }
        }
        for(vector<int> v : se) {
            ans.push_back(v);
        }
        return ans;
    }
};

int main() {
    
}