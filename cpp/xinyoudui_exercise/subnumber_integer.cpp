#include <bits/stdc++.h>
using namespace std;

bool check(int k, int num) {
  int a, b, c, d, e;
  int sub_1, sub_2, sub_3;

  e = num % 10;
  d = num / 10 % 10;
  c = num / 100 % 10;
  b = num / 1000 % 10;
  a = num / 10000;

  sub_1 = 100 * a + 10 * b + c;
  sub_2 = 100 * b + 10 * c + d;
  sub_3 = 100 * c + 10 * d + e;

  if (sub_1 % k == 0 && sub_2 % k == 0 && sub_3 % k == 0)
    return true;
  else
    return false;
}
int main() {
  int k;
  cin >> k;
  int amount = 0;
  for (int i = 10000; i <= 30000; i++) {
    if (check(k, i)) {
      cout << i << '\n';
      amount++;
    }
  }
  if(amount == 0) cout << "No";
  return 0;
}