#include <bits/stdc++.h>
using namespace std;

bool is_prime(int a) {
  bool b = true;
  if (a == 1)
    return false;
  if (a == 0)
    return false;
  if (a == 2)
    return true;
  for (int i = 2; i <= sqrt(a); i++) {
    if (a % i == 0) {
      b = false;
      break;
    }
  }
  return b;
}

struct node {
  int floor;
  bool maybe = false;
};

bool cmp(node a, node b) {
  return(a.floor <= b.floor);
}

int main() {
  int search_amount;
  cin >> search_amount;
  node search[search_amount];
  int time = 0;
  int now = 0;

  for (int i = 0; i < search_amount; i++) {
    cin >> search[i].floor;
  }

  for (int i = 0; i < search_amount; i++) {
    int search_floor = search[i].floor;
    if(search_floor > now) time += 6 * (search_floor - now);
    if(search_floor < now) time += 4 * (now - search_floor);
    now = search_floor;
    time += 5;
    
    if(is_prime(time + now)) search[i].maybe = true;
  }
  
  int amount = 0;
  sort(search, search + search_amount, cmp);
  for(int i = 0; i < search_amount; i++) {
    if(search[i].maybe) {
      cout << search[i].floor << ' ';
      amount += 1;
    }
  }
  if(amount == 0) cout << "No";
  return 0;
}