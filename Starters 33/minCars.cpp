#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    ll ans = 0;
    if(n % 4 == 0){
      ans = n/4;
    }
    else{
      ans = n/4 + 1;
    }
    cout << ans << endl;
  }
  return 0;
}