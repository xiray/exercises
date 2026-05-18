#include <bits/stdc++.h>
using namespace std;
int main() {
  long long start, end, sum = 0, k;
  long long i;
  cin >> start >> end >> k;

  for(i = start; i % k != 0; i++) {
    continue;
  }

  for(; i <= end; i += k) {
    sum += i;
    if(i > 0)
      cout << i << ' ';
  }
  cout << endl << sum;
}