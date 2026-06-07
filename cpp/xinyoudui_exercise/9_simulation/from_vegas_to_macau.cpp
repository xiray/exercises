#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int a[n], b[n];
  int now[n * 2];

  for(int i = 0; i < n; i++) a[i] = i + 1;
  for(int i = 0; i < n; i++) b[i] = i + n + 1;
  
  for(int i = 1; i <= m; i++) {
    for(int j = 0; j < n; j++) {
      now[j * 2 + 1] = a[j];
      now[j * 2] = b[j];
    }
    
    for(int j = 0; j < n; j++) {
      a[j] = now[j];
    }
    for(int j = n; j < 2 * n; j++) {
      b[j - n] = now[j];
    }
  }
  for(int i = 0; i < 2 * n; i++) {
    cout << now[i] << ' ';
  }
  return 0;
}