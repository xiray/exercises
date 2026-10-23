#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        char a[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int mean[7] = {1, 5, 10, 50, 100, 500, 1000};
        int ans = 0;
        int pos = 0, len = s.size();

        while (pos < len) {
            int now_ = 0, next = 0;
            for (int i = 0; i < 7; i++) {
                if (s[pos] == a[i]) now_ = mean[i];
                if (pos + 1 < len && s[pos + 1] == a[i]) next = mean[i];
            }
            if (now_ < next) {
                ans += next - now_;
                pos += 2;
            } else {
                ans += now_;
                pos += 1;
            }
        }
        return ans;
    }
};