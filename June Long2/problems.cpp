#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  for(ll i =0;i < 76;i++){
      
  }
  ll t;
  cin >> t;
  while(t--){
    ll p;
    cin >> p;
    ll temp = p/100;
    ll rem = p % 100;
    ll ans = temp + rem;
    if(ans > 10){
      cout << -1 << endl;
    }
    else{
      cout << ans << endl;
    }
  }
}