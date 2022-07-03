#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    ll p1 = 1,p2=n;
    while(p1 < p2){
      cout << p2 << " " << p1 << " ";
      p1++;
      p2--;
    }
    if(p1 == p2){
      cout << p1;
    }
    cout << endl;
  }
  return 0;
}