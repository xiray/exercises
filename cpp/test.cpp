#include<bits/stdc++.h>
using namespace std;

struct node {
  string name;
  int area;
  int year;
  int age;
  bool is_child;
  bool is_old;
  bool is_adult;
  int date;
  int id;
  bool is_man;
  int nothing;
  int ability;
};

bool cmp(node a,node b) {
  
  if(a.is_child && b.is_child) return a.age<=b.age;
  if(a.is_old && b.is_old) return a.age>=b.age;
  
  if(a.is_adult && b.is_adult) {
    if(a.is_man && b.is_man) return a.ability<=b.ability;
    if(! a.is_man && ! b.is_man) return a.age>=b.age;
    return a.is_man<b.is_man;
  }

  if(a.is_child) {
    if(b.is_adult || b.is_old) return true;
    else return false;
  }
  if(a.is_old && b.is_adult) return true;
  else return false;
}

int main() {
  int n;
  cin>>n;
  node a[n+1];
  for(int i=1;i<=n;i++) {
    st
  }
}