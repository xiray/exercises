/*题目描述

请找出最大的满足以下条件的十位数：
1. 这个十位数由 0~9 组成，且各出现一次。
2. 这个十位数是一个完全平方数。
*/

#include <bits/stdc++.h>
using namespace std;

bool check(long long a) {
  int number[10] = {};
  for (int i = 0; i <= 9; i++) {
    number[a % 10]++;
    a /= 10;
  }
  for (int i = 0; i <= 9; i++) {
    if (number[i] == 0 || number[i] > 1)
      return false;
    ;
  }
  return true;
}

int main() {
  long long num;
  
  for(num = 99999; num >= 31623; num--) {
    if(check(num * num)) {
    cout<< num * num;
    return 0;
    }
  }
}