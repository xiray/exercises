#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> ans;
    string now_fixing;
    string a[10] = {"no", "no", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    void sol(string & str, int i) {
    if(i == str.size()) {
      ans.push_back(now_fixing);
      return;
    }
    for(char chr : a[str[i] - '0']) {
      now_fixing += chr;
      sol(str, i + 1);
      now_fixing.pop_back();
    }

    
  }
    vector<string> letterCombinations(string digits) {
      sol(digits, 0);
      return ans;
    }
};

