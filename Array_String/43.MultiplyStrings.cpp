#include <bits/stdc++.h>

using namespace std;

//  https://leetcode.com/problems/multiply-strings/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        if (n1 == 0 || n2 == 0) return "0";
        vector<int> result(n1 + n2, 0);
        int i_n1 = 0;
        int i_n2 = 0;
        for (int i = n1 - 1; i >= 0; i--) 
        {
            int carry = 0;
            int n1_digit = num1[i] - '0';
            i_n2 = 0;
            for (int j = n2 - 1; j >= 0; j--) 
            {
                int n2_digit = num2[j] - '0';
                int sum = n1_digit * n2_digit + result[i_n1 + i_n2] + carry;
                carry = sum / 10;
                result[i_n1 + i_n2] = sum % 10;
                i_n2++;
            }
            if (carry > 0) result[i_n1 + i_n2] += carry;
            i_n1++;
        }
        int i = result.size() - 1;
        while (i >= 0 && result[i] == 0) i--;
        if (i == -1) return "0";
        string s = "";
        while (i >= 0) s += std::to_string(result[i--]);
        return s;
    }
};

int main() {
    
}