#include<iostream>
using namespace std;

static void _fib(int a0,int a1,int n) {
	if(a1<=n) {
		cout<<a1<<endl;
		_fib(a1,a1+a0,n);
	}
}
	
static void fib(int n) {
	cout<<0<<endl;
	_fib(0,1,n);
}

int main() {
	fib(13);
}
	
