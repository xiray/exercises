#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size();
        if (len <= 1) return s;
        int max_len = 1;
        string ans = s.substr(0, 1);

        for (int i = 0; i < len; i++) {
            int left = i - 1, right = i + 1;
            int now_max_len = 1;
            while (left >= 0 && right < len && s[left] == s[right]) {
                now_max_len += 2; right++; left--;
            }
            if (now_max_len > max_len) {
                max_len = now_max_len;
                ans = s.substr(left + 1, now_max_len);
            }
        }

        for (int i = 1; i < len; i++) {
            int left = i - 1, right = i;
            int now_max_len = 0;
            while (left >= 0 && right < len && s[left] == s[right]) {
                now_max_len += 2; right++; left--;
            }
            if (now_max_len > max_len) {
                max_len = now_max_len;
                ans = s.substr(left + 1, now_max_len);
            }
        }
        return ans;
    }
};