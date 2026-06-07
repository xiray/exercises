#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
  int ab, cd;
  ab = n / 100;
  cd = n % 100;
  if ((ab + cd) * (ab + cd) == n) return true;
  else return false;
}

int main() {
  int n;
  cin >> n;
  for(int i = 1000; i <= n; i++) {
    if(check(i)) cout << i << endl;
  }
  return 0;
}