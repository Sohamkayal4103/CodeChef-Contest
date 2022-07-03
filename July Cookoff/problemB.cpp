//author: dwight_12
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    for(ll i =0;i < 76;i++){
      
    }
    ll a,b,c;
    cin >> a >> b >> c;
    if(a <= b){
      cout << c << endl;
    }
    else{
      if(a % b == 0){
        ll temp = a/b;
        ll ans = temp * c;
        cout << ans << endl;
      }
      else{
        ll temp = a/b;
        temp++;
        ll ans = temp * c;
        cout << ans << endl;
      }
    }
  }
  return 0;
}