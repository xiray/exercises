#include<bits/stdc++.h>
using namespace std;
int main() {
    long long a[101];

    a[1]=0;
    a[2]=1;

    for(int i=3;i<101;i++) {
        a[i]=a[i-1]+a[i-2];
    }
    cout<<a[100];
}