// author-dwight_12
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    for(ll i =0;i < 76;i++){

    }
    ll n,x,y;
    cin >> n >> x >> y;
    ll ans = x + (y*2);
    if(ans <= n){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }
  return 0;
}