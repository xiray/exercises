#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        int len = strs.size();
        for (int i = 1; i < len; i++) {
            int pos = 0;
            int nl = strs[i].size();
            while (pos < nl && pos < ans.size() && strs[i][pos] == ans[pos]) {
                pos++;
            }
            ans = strs[i].substr(0, pos); 
            if (ans.empty()) return ""; 
        }
        return ans;
    }
};