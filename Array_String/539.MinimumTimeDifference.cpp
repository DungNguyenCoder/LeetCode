#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/minimum-time-difference/description/?envType=problem-list-v2&envId=string

class Solution {
    public:
        int minTime(string a, string b) {
            int aH = stoi(a.substr(0, 2));
            int aM = stoi(a.substr(3, 2));
            int bH = stoi(b.substr(0, 2));
            int bM = stoi(b.substr(3, 2));
            int ans = (bH - aH) * 60 + bM - aM;
            return ans;
        }

        int findMinDifference(vector<string>& timePoints) {
            sort(timePoints.begin(), timePoints.end());
            int n = timePoints.size();
            int minn = 10000000;
            for (int i = 1; i < n; i++) {
                minn = min(minn,minTime(timePoints[i-1], timePoints[i]));
            }

            int firstH = stoi(timePoints[0].substr(0, 2));
            int firstM = stoi(timePoints[0].substr(3, 2));
            int lastH = stoi(timePoints[n-1].substr(0, 2));
            int lastM = stoi(timePoints[n-1].substr(3, 2));
    
            int wrapAround = (firstH + 24 - lastH) * 60 + (firstM - lastM);
            minn = min(minn, wrapAround);

            return minn;
        }
    };

int main() {
    
}