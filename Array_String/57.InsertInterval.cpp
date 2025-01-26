#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/insert-interval/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        vector<vector<int>> ans;
        vector<int> tmp;
        if(intervals.empty()) {
            ans.push_back(newInterval);
            return ans;
        }
        auto it = intervals.begin();
        while(it != intervals.end() && (*it).front() < newInterval.front()) {
            ++it;
        }
        intervals.insert(it,newInterval);
        n++;
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