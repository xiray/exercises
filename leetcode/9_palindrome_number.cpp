#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
      string s = to_string(x);
      bool is = true;
      int len = s.size();
      int times = len / 2;
      for(int i = 0; i < times; i++) {
        if(s[i] != s[len - 1 - i]) return false;
      }
      return true;
    }
};

int main() {
  Solution sol;
  cout << (sol.isPalindrome(121));
  cout << (sol.isPalindrome(-121));
  cout << (sol.isPalindrome(1221));
  cout << (sol.isPalindrome(0));
  
}