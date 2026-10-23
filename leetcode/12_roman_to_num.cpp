#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
    string chr[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int mean[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string ans;

    while (num > 0) {
      int a = 0;
      while(a < 13) {
        if(mean[a] <= num) {
          ans += chr[a];
          num -= mean[a];
          break;
        }
        a++;
      }
    }
    return ans;   
    }
};