#include <bits/stdc++.h>
using namespace std;
int main() {
  int amount;
  int n;
  cin >> n;
  int my_number;
  int all_number = 1;
  while (true) {
    amount = all_number * (all_number + 1) / 2;
    if (amount > n && (amount - n) % 3 == 0) {
      my_number = (amount - n) / 3;
      cout << my_number << ' ' << all_number;
      return 0;
    }
    all_number++;
  }
}