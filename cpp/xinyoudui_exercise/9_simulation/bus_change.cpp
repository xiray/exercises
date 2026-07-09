#include<bits/stdc++.h>
using namespace std;
// 0 means subway
// 1 means bus

struct transporation {
  int type;
  int start;
  int price;
};

struct Ticket {
  int end;
  int price;
  int used = true;
};

int main() {
  int n;
  cin >> n;
  transporation a[n];
  Ticket ticket[n];
  int pos = 0;
  int pos_amount = 0;
  int money = 0;

  for(int i = 0; i < n; i++) {
    cin >> a[i].type >> a[i].price >> a[i].start;

    if(a[i].type == 0) {
      ticket[pos].used = false;
      ticket[pos].price = a[i].price;
      ticket[pos].end = 45 + a[i].start;
      pos++;
      pos_amount ++;
      money += a[i].price;
    }

    if(a[i].type == 1) {
      for(int j = 0; j < pos_amount; j++) {
        if(a[i].price <= ticket[j].price && ticket[j].end >= a[i].start && !ticket[j].used) {
          money -= a[i].price;
          ticket[j].used = true;
          break;
        }
      }
      money += a[i].price;
    }
  }
  cout << money;
  return 0;
}