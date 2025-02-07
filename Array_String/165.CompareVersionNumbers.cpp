#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/compare-version-numbers/description/?envType=problem-list-v2&envId=string

class Solution {
    public:
        int compareVersion(string version1, string version2) {
            string token;
            stringstream ss1(version1);
            vector<string> v1;
            while(getline(ss1,token,'.')) {
                v1.push_back(token);
            }
            stringstream ss2(version2);
            vector<string> v2;
            while(getline(ss2,token,'.')) {
                v2.push_back(token);
            }
            int maxLen = max(v1.size(),v2.size());
            while(v1.size() < maxLen)   v1.push_back("0");
            while(v2.size() < maxLen)   v2.push_back("0");
            for(int i = 0; i < maxLen; i++) {
                int num1 = stoi(v1[i]);
                int num2 = stoi(v2[i]);
                if(num1 < num2) {
                    return -1;
                }
                else if(num1 > num2) {
                    return 1;
                }
            }
            return 0;
        }
    };

int main() {
    
}