#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int k = 0;
        for(int i = 1; i < n; i++) {
            if(nums[i-1] > nums[i]) {
                k = i;
                break;
            }
        }
        return binary_search(nums.begin(),nums.begin()+k,target) || binary_search(nums.begin()+k,nums.end(),target);
    }
};

int main() {
    
}