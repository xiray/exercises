#include <bits/stdc++.h>
using namespace std;

int search(int n, int a[], int goal) {
    int left = 0, right = n - 1;
    int pos = n;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] >= goal) {
            pos = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    if (pos == 0) return a[0];
    if (pos == n) return a[n - 1];
    
    int diff1 = abs(a[pos] - goal);
    int diff2 = abs(a[pos - 1] - goal);
    
    if (diff1 < diff2) return a[pos];
    if (diff2 < diff1) return a[pos - 1];
    return min(a[pos], a[pos - 1]);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int x;
    bool first = true;
    while (cin >> x) {
        if (!first) cout << " ";
        cout << search(n, a, x);
        first = false;
    }
    
    return 0;
}