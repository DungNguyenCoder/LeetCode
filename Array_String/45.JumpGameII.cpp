#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/jump-game-ii/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    int jump(vector<int>& nums) {
        int currentBegin = 0;
        int currentEnd = 0;
        int farthest = 0;
        int jumps = 0;
        int n = nums.size();
        while(currentEnd < n-1) {
            farthest = currentEnd;
            for(int i = currentBegin; i <= currentEnd; i++) {
                farthest = max(farthest,i+nums[i]);
            }
            jumps++;
            currentBegin = currentEnd+1;
            currentEnd = farthest;
        }
        return jumps;
    }
};

int main() {
    
}