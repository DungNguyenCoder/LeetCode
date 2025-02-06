#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/lexicographically-smallest-string-after-applying-operations/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    vector<int> peopleIndexes(vector<vector<string>>& favoriteCompanies) {
        vector<pair<set<string>,int>> sets;
        int n = favoriteCompanies.size();
        for(int i = 0; i < n; i++) {
            set<string> companySet(favoriteCompanies[i].begin(),favoriteCompanies[i].end());
            sets.push_back({companySet,i});
        }

        sort(sets.begin(),sets.end(), [](auto &a, auto &b) {
            return a.first.size() < b.first.size();
        });

        vector<int> res;

        for(int i = 0; i < n; i++) {
            bool check = false;
            for(int j = i+1; j < n; j++) {
                if(includes(sets[j].first.begin(),sets[j].first.end(),sets[i].first.begin(),sets[i].first.end())) {
                    check = true;
                    break;
                }
            }
            if(!check) {
                res.push_back(sets[i].second);
            }
        }

        sort(res.begin(),res.end());
        return res;
    }
};

int main() {
    
}