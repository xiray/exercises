#include<bits/stdc++.h>
using namespace std;

// is set, always return bool
bool is_sign(char a) {
  if(a == '+' || a == '-' || a == '*' || a == '/')
    return true;
  else
    return false;
}

bool is_number(char a) {
  if(a >= '0' && a <= '9')
    return true;
  else
    return false;
}

bool is_prime(long long a) {
  if(a == 0) return false;
  if(a == 1) return false;
  if(a == 2) return true;
  for(long long i = 2; i <= sqrt(a); i++) {
    if(a % i == 0)
      return false;
  }
  return true;
}


// to and turn set
int str_to_int(string a) {
  int x = 0;
  int len = a.size();
  for(int i = 0; i < len; i++) {
    x *= 10;
    x += a[i] - 48;
  }
  return x;
} 