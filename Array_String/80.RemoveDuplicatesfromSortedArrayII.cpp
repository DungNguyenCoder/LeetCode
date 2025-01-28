#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1) {
            return 1;
        }
        if(nums.size() == 2) {
            return 2;
        }
        for(int i = 2; i < nums.size(); i++) {
            if(nums[i] == nums[i-1] && nums[i] == nums[i-2]) {
                nums.erase(nums.begin()+i);
                --i;
            }
        }
        return nums.size();
    }
};

int main() {
    
}