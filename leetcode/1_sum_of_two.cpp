#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int len = nums.size();
    int a1, a2;
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len; j++) {
            if(i == j) continue;
            if(nums[i] + nums[j] == target) {
                a1 = i;
                a2 = j;
                return{a1, a2};
            }
        }
    }
    return{};
    }
};