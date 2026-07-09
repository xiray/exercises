#include<bits/stdc++.h>
using namespace std;

int str_to_int(string a) {
  int x = 0;
  int len = a.size();
  for(int i = 0; i < len; i++) {
    x *= 10;
    x += a[i] - 48;
  }
  return x;
}

int main() {
  string a, num_1, num_2, sign;
  bool space = false;
  getline(cin, a);
  int len = a.size(), sign_place, n1, n2;

  for(int i = 0; i < len; i++) {
    if(a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/') {
      sign = a[i];
      sign_place = i;
    }
    if(a[i] == ' ') {
      space = true;
    }
    if(a[i] < 48 || a[i] > 57) {
      cout << "wrong input";
      return 0;
    }
  } 

  if(!space) {
    num_1 = a.substr(0, sign_place );
    num_2 = a.substr(sign_place + 1, len - sign_place);
  }
  if(space) {
    num_1 = a.substr(0, sign_place - 1);
    num_2 = a.substr(sign_place + 2, len - sign_place);
  }
  n1 = str_to_int(num_1);
  n2 = str_to_int(num_2);

  float ans;
  if(sign == "+") ans = n1 + n2;
  if(sign == "-") ans = n1 - n2;
  if(sign == "*") ans = n1 * n2;
  if(sign == "/") {
    if(n2 != 0)
      ans = n1 / 1.0 / n2;
    else {
      cout << "the second number can't be 0";
      return 0;
    }
  }
  cout << ans;
  return 0;
} 