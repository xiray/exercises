#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, type;
  cin >> n >> m >> type;
  int t[n], q[n];

  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> q[i];
  }

  int both = 0;
  for (int i = 0; i < n; i++) {
    if (t[i] == 1 && q[i] == 1)
      both++;
  }

  int amount = 0;
  amount += n;
  if (both >= m) {
    amount -= both;
    amount += m;
  }

  cout << amount;
  return 0;
}