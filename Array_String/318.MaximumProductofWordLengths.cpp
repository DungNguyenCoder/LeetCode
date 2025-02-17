#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/maximum-product-of-word-lengths/description/?envType=problem-list-v2&envId=string

class Solution {
    public:
        int maxProduct(vector<string>& words) {
            int n = words.size();
            unordered_set<char> se;
            int ans = 0;
            for (int i = 0; i < n-1; i++) {
                se.clear();
                for (int k = 0; k < words[i].size(); k++) {
                    se.insert(words[i][k]);
                }
                for (int j = i + 1; j < n; j++) {
                    bool ok = true;
                    for (int k = 0; k < words[j].size(); k++) {
                        if(se.count(words[j][k]) == 1) {
                            ok = false;
                            break;
                        }
                    }
                    if(!ok) {
                        continue;
                    }
                    ans = max(ans, (int)(words[i].size() * words[j].size()));
                }
            }
            return ans;
        }
    };

int main() {
    
}