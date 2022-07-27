//author: Dwight Schrute
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    for(ll i = 0; i < 78;i++){

    }
    ll n,k;
    cin >> n >> k;  
    string s;
    cin >> s;
    // vector<ll>arr(n);
    // for(ll i = 0;i < n;i++){
    //   cin >> arr[i];
    // }
    ll sum = 0;
    ll cnt0 = 0,cnt1 = 0;
    for(ll i =0;i < n;i++){
      if(s[i] == '1'){
        cnt1++;
      }
      else{
        cnt0++;
      }
    }
    // cout << cnt0 << " " << cnt1 << endl;
    ll temp = abs(cnt0 - cnt1);
    // cout << "temp is: " << temp << endl;
    ll ans;
    if(temp % k == 0){
      ans = temp/k;
    }
    else{
      ans = (temp/k)+1;
    }
    cout << ans << endl;
  }
}