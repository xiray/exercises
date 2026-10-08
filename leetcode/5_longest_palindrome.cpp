#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int max_len = 1;
        int now_max_len;
        int len = s.size();
        string ans;
        
        //奇数
      for(int i = 1; i < len - 1; i++) {
        int left = i - 1, right = i + 1;
        now_max_len = 1;
        while(left >= 0 && right < len && s[left] == s[right] ) {
          now_max_len += 2;
          right++;
          left--;
        }
        if(now_max_len > max_len) {
          ans = s.substr(left + 1, now_max_len);
          max_len = now_max_len;
        }
      }

      //偶数
      for(int i = 1; i < len - 1; i++) {
        int left = i - 1, right = i;
        now_max_len = 0;
        while(left >= 0 && right < len && s[left] == s[right]) {
          now_max_len += 2;
          right++;
          left--;
        }
        if(now_max_len > max_len) {
          ans = s.substr(left + 1, now_max_len);
          max_len = now_max_len;
        }
      }
      return ans;
    }
};