#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/3sum/?envType=problem-list-v2&envId=array

int binarySearch(vector<int> nums, int l, int r, int x) {
    while(l <= r) {
        int m = (l+r)/2;
        if(nums[m] == x) {
            return m;
        }
        else if(nums[m] > x) {
            r = m-1;
        }
        else {
            l = m+1;
        }
    }
    return -1;
}

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int l = i + 1, r = n - 1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    while (l < r && nums[l] == nums[l + 1]) l++;
                    while (l < r && nums[r] == nums[r - 1]) r--;

                    l++;
                    r--;
                } else if (sum < 0) {
                    l++;
                } else {
                    r--;
                }
            }
        }

        return ans;
    }
};
int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)
        cin >> nums[i];
    Solution a;
    vector<vector<int>> v = a.threeSum(nums);
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}