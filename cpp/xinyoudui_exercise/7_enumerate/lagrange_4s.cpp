/* 拉格朗日四平方和定理指出：  
每个非负整数都可表示为四个非负整数的平方和。
例如：( 5 = 0^2 + 0^2 + 1^2 + 2^2 )。

问题重述： 
给定一个正整数 n ，将其拆分为  
n = a^2 + b^2 + c^2 + d^2
其中  a, b, c, d  是非负整数。  
求 a + b + c + d 的 最小值。*/

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  long long smallest = 900001;
  cin >> n;
  long long a, b, c;
  int maxi = sqrt(n);

  for (a = 0; a <= maxi; a++) {
    long long a2 = a * a;
    for (b = 0; b <= maxi; b++) {
      long long b2 = b * b;
      for (c = 0; c <= maxi; c++) {
        long long c2 = c * c;
        long long d = sqrt(n - a2 - b2 - c2);
        long long d2 = d * d;
        long long num = a + b + c + d;
        if (a2 + b2 + c2 + d2 == n && num <= smallest)
          smallest = num;
      }
    }
  }

  cout << smallest;
  return 0;
}