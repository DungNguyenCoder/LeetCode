#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/sort-colors/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                if(nums[i] > nums[j]) {
                    swap(nums[i],nums[j]);
                }
            }
        }
    }
};

int main() {
    
}