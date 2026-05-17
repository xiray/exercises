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