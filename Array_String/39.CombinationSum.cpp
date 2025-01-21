#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/combination-sum/description/?envType=problem-list-v2&envId=array

void Try(vector<vector<int>> &ans, vector<int> candidates,vector<int> &tmp, int sum, int target, int i) {
    if(sum == target) {
        ans.push_back(tmp);
        return;
    }
    if(sum > target || i >= candidates.size()) {
        return;
    }
    
    tmp.push_back(candidates[i]);
    Try(ans,candidates,tmp,sum + candidates[i],target,i);
    tmp.pop_back();

    Try(ans,candidates,tmp,sum,target,i+1);
}

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> tmp;
        Try(ans,candidates,tmp,0,target,0);
        return ans;
    }
};

int main() {
    
}