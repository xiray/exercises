/*
  n / m >= x
  n >= xm
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, x;
  cin >> m >> x;
  cout << m * (x - 1) + 1;
  return 0;
}