#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/search-in-rotated-sorted-array/description/?envType=problem-list-v2&envId=array

int binarySearch(vector<int> nums, int l, int r, int x) {
    while(l <= r) {
        int m = (l+r)/2;
        if(nums[m] == x) {
            return m;
        }
        else if(nums[m] < x) {
            l = m+1;
        }
        else {
            r = m-1;
        }
    }
    return -1;
}

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int k = 0;
        vector<int> ans(n);
        int idx = 0;
        for(int i = 1; i < n; i++) {
            if(nums[i] < nums[i-1]) {
                k = i;
                break;
            }
        }
        int check = binarySearch(nums,0,k-1,target);
        if(check != -1) {
            return check;
        }
        check = binarySearch(nums,k,n-1,target);
        return check;
    }
};

int main() {
    
}