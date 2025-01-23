#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/maximum-subarray/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currentSum = 0;
        int bestSum = 0;
        bool check = true;
        for(int i = 0; i < n; i++) {
            if(nums[i] >= 0 && check == true) {
                check = false;
            }
            currentSum += nums[i];
            bestSum = max(bestSum,currentSum);
            if(currentSum < 0) {
                currentSum = 0;
            } 
        }
        if(check) {
            sort(nums.begin(),nums.end());
            bestSum = nums.back();
        }
        return bestSum;
    }
};

int main() {
    
}