#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len = nums.size(), history_deviation = 99999999;
        int ans;
        sort(nums.begin(), nums.end());
        int pos = 0;
        for(; pos < len - 2; pos++) {
          int left = pos + 1, right = len - 1;
          while(left < right) {
            int now_num = (nums[pos] + nums[left] + nums[right]);
            int deviation = abs(target - now_num);
            ans = deviation < history_deviation ? now_num : ans;
            history_deviation = min(history_deviation, deviation);
            if(now_num < target) left++;
            if(now_num > target) right--;
            if(now_num == target) return target;
          }
        }
        return ans;
    }
}; 
