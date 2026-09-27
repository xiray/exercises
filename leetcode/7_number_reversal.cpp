#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
      int reverse(int x) {
        long n = 0;
        while(x != 0) {
          n = n*10 + x%10;
          x = x/10;
        }
        if((int)n == n) return n;
        else return 0;
    }
};