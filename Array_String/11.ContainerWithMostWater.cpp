#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/container-with-most-water/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n - 1;
        int maxArea = 0;
        int water;
        while (l < r) {
            if (height[l] < height[r]) {
                water = height[l] * (r - l);
                ++l;
            } else {
                water = height[r] * (r - l);
                --r;
            }
            maxArea = max(maxArea, water);
        }
        return maxArea;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> height(n);
    for(int i = 0; i < n; i++) {
        cin >> height[i];
    }
    Solution a;
    cout << a.maxArea(height);
}