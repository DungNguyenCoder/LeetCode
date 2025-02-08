#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/fraction-to-recurring-decimal/description/?envType=problem-list-v2&envId=string

class Solution {
    public:
        string fractionToDecimal(int numerator, int denominator) {
            if(!numerator)
                return "0";
            string res = "";
            if(numerator < 0 ^ denominator < 0) {
                res += "-";
            }
            long num = labs(numerator);
            long den = labs(denominator);
            long q = num/den;
            long r = num%den;
            res += to_string(q);
            if(r == 0)
                return res;
            res += ".";
            unordered_map<int,int> mp;
            while(r) {
                if(mp.find(r) != mp.end()) {
                    int pos = mp[r];
                    res.insert(pos,"(");
                    res += ")";
                    break;
                }
                else {
                    mp[r] = res.length();
                    r *= 10;
                    q = r/den;
                    r = r%den;
                    res += to_string(q);
                }
            }
            return res;
        }
    };

int main() {
    
}