#include<bits/stdc++.h>
using namespace std;

double oujilide(int x1,int y1,int x2,int y2) {
	int long_=0;
	long_=sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2));
	return long_;
}
int main() {
	cout<<oujilide(0,0,0,100);
	return 0;
}
