#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        int len = nums.size();

        if (len < 4) return {};

        for(int i = 0; i < len - 3; i++) {
            for(int j = i + 1; j < len - 2; j++) {
                int left = j + 1, right = len - 1;
                long long base = (long long)nums[i] + nums[j];
                
                while(left < right) {
                    long long sum = base + nums[left] + nums[right];
                    
                    if(sum == target) {
                        vector<int> tmp = {nums[i], nums[j], nums[left], nums[right]};
                        sort(tmp.begin(), tmp.end());
                        ans.insert(tmp);
                        left++;
                        right--;
                    }
                    else if(sum > target) right--;
                    else left++;
                }
            }
        }
        
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};