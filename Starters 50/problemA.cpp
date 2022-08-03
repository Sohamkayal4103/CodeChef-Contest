#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll x,y;
    cin >> x >> y;
    ll mid = (x+y)/2;
    ll ans = max(abs(mid-x),abs(mid-y));
    cout << ans << endl;
  }
}