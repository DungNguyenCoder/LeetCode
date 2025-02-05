#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/simplify-path/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    string simplifyPath(string path) {
        int n = path.size();
        if(n == 1) {
            return path;
        }
        int idx = 1;
        while(idx < n) {
            if(path[idx] == path[idx-1] && path[idx] == '/') {
                path.erase(path.begin()+idx);
                --n;
            }
            else {
                ++idx;
            }
        }
        vector<string> tmp;
        string token;
        path.erase(path.begin());
        stringstream ss(path);
        while(getline(ss,token,'/')) {
            tmp.push_back(token);
        }
        int k = tmp.size();
        string ans = "";
        idx = 0;
        while(idx < k) {
            token = tmp[idx];
            if(token != "." && token != "..") {
                if(!ans.empty() && ans.back() == '/')
                    ans += token;
                else 
                    ans += "/" + token;
            }
            else if(token == "..") {
                if(!ans.empty()) {
                    while(ans.back() != '/') {
                        ans.pop_back();
                    }
                    ans.pop_back();
                }
                else {
                    ans += '/';
                }
            }
            ++idx;
        }
        if(ans.empty()) {
            ans += '/';
        }
        return ans;
    }
};

int main() {
    
}