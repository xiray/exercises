#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        int l1 = nums1.size(), l2 = nums2.size();
        for(int i = 0; i < l1; i++) a.push_back(nums1[i]);
        for(int i = 0; i < l2; i++) a.push_back(nums2[i]);
        sort(a.begin(), a.end());
        if(a.size() % 2 == 1) return a[a.size() / 2];
        else return (a[a.size() / 2] + a[a.size() / 2 - 1]) / 2.0;
    }
};