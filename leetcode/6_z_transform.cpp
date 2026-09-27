#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) return s;

        vector<string> rows(numRows);
        int row = 0;
        int dir = 1;

        for (int i = 0; i < s.size(); i++) {
            rows[row] += s[i];
            if (row == 0) dir = 1;
            else if (row == numRows - 1) dir = -1;
            row += dir;
        }

        string ans;
        for (int i = 0; i < numRows; i++) ans += rows[i];
        return ans;
    }
};