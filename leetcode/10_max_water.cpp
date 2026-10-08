#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int left = 0, right = height.size() - 1;;
        while(left < right) {
          int way = right - left;
          int now_ = min(height[right],height[left]) * way;
          ans = max(ans, now_);
          if(height[left] < height[right]) left++;
          else right--;
        }
        return ans;
    }

};