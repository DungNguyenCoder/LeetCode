#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/3sum-closest/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closest = 1000000;
        int sum;
        for(int i = 0; i < n-2; i++) {
            int l = i+1;
            int r = n-1;
            while(l < r) {
                sum = nums[i] + nums[l] + nums[r];
                if(sum == target) {
                    return sum;
                }
                else if(sum > target) {
                    if(abs(sum-target) < abs(closest-target))
                        closest = sum;
                    --r;
                }
                else {
                    if(abs(sum-target) < abs(closest-target))
                        closest = sum;
                    ++l;
                }
            }
        }
        return closest;
    }
};

int main() {
    
}