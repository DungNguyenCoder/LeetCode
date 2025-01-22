#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/permutations-ii/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        do {
            ans.push_back(nums);
        }   while(next_permutation(nums.begin(),nums.end()));
        return ans;
    }
};

int main() {
    
}