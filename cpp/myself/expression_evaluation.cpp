#include <bits/stdc++.h>
using namespace std;

bool is_sign(char a) { return (a == '+' || a == '-' || a == '*' || a == '/'); }

bool is_number(char a) { return (a >= '0' && a <= '9'); }

int str_to_int(string a) {
  int x = 0;
  for (char c : a) {
    x = x * 10 + (c - '0');
  }
  return x;
}

int main() {
  string a, num_1, num_2, sign;
  bool space = false, have_sign = false;
  bool m1 = false, m2 = false;
  getline(cin, a);
  int len = a.size(), sign_place, n1, n2;

  for (int i = 0; i < len; i++) {
    if (i != 0 && is_sign(a[i]) && have_sign == false) {
      sign = a[i];
      have_sign = true;
      sign_place = i;
      continue;
    }
    if (i == 0 && a[i] == '-')
      m1 = true;
    if (i == 1 && a[i] == '-')
      m1 = true;
    if (have_sign && a[i] == '-')
      m2 = true;
    if (a[i] == ' ')
      space = true;
    if (!(is_number(a[i]) || is_sign(a[i]) || a[i] == ' ')) {
      cout << "wrong input";
      return 0;
    }
  }

  int l1 = 0, len1 = sign_place;
  int l2 = sign_place + 1, len2 = len - sign_place - 1;

  if (space) {
    len1--;
    len2--;
    l2++;
  }
  if (m1) {
    l1++;
    len1--;
  }
  if (m2) {
    len2--;
    l2++;
  }

  num_1 = a.substr(l1, len1);
  num_2 = a.substr(l2, len2);

  n1 = str_to_int(num_1);
  n2 = str_to_int(num_2);
  if (m1)
    n1 *= -1;
  if (m2)
    n2 *= -1;

  float ans;
  if (sign == "+")
    ans = n1 + n2;
  else if (sign == "-")
    ans = n1 - n2;
  else if (sign == "*")
    ans = n1 * n2;
  else if (sign == "/") {
    if (n2 != 0)
      ans = (float)n1 / n2;
    else {
      cout << "the second number can't be 0";
      return 0;
    }
  }
  cout << ans;
  return 0;
}