#include <bits/stdc++.h>
using namespace std;

int find(int n, int a[], int m) {
  int mid;
  int pos = -1;
  int left = 0, right = n - 1;

while(left <= right) {
  mid=(left + right) / 2;
  if(a[mid] == m) {
    pos = mid;
    left = mid + 1;
  }
  else if(a[mid] < m) left = mid + 1;
  else if(a[mid] > m) right = mid - 1;
}
  return ++pos;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int x;
  while(cin >> x) cout << find(n, a, x) << ' ';
  return 0;
}