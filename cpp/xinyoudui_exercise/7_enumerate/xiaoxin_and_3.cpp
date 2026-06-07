#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int cnt[10] = {0};
  int x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    cnt[x % 10]++;
  }

  for (int i = 0; i < 10; i++) {
    if (cnt[i] == 0)
      continue;
    for (int j = i; j < 10; j++) {
      if (cnt[j] == 0)
        continue;
      for (int k = j; k < 10; k++) {
        if (cnt[k] == 0)
          continue;

        if (i == j && j == k && cnt[i] < 3)
          continue;
        if (i == j && j != k && cnt[i] < 2)
          continue;
        if (i != j && j == k && cnt[j] < 2)
          continue;

        if ((i + j + k) % 10 == 3) {
          cout << "YES" << endl;
          return 0;
        }
      }
    }
  }

  cout << "NO" << endl;
  return 0;
}