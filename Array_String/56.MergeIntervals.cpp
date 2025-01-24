#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/merge-intervals/description/?envType=problem-list-v2&envId=array

bool cmp(const vector<int> &a, const vector<int> &b) {
    if(a.front() != b.front()) {
        return a.front() < b.front();
    }
    return a.back() < b.back();
}

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int n = intervals.size();
        vector<vector<int>> ans;
        vector<int> tmp;
        int start = intervals[0].front();
        int end = intervals[0].back();
        for(int i = 1; i < n; i++) {
            if(intervals[i].front() <= end) {
                if(intervals[i].back() >= end)
                    end = intervals[i].back();
            }
            else {
                tmp.push_back(start);
                tmp.push_back(end);
                ans.push_back(tmp);
                tmp.clear();
                start = intervals[i].front();
                end = intervals[i].back();
            }
        }
        tmp.push_back(start);
        tmp.push_back(end);
        ans.push_back(tmp);
        return ans;
    }
};

int main() {
    
}