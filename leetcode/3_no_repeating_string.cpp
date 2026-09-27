#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int last[128] = {};
    int left = 0, ans = 0;
    for (int right = 0; right < (int)s.size(); right++) {
        char ch = s[right];
        if (last[ch] > left) left = last[ch];
        last[ch] = right + 1;
        ans = max(ans, right - left + 1);
    }
    return ans;
  }
};