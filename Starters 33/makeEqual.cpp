#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
      cin >> arr[i];
    }
    ll counter = 0;
    for(auto it : arr){
      if(it % 2 == 1){
        counter++;
      }
    }
    ll ans = 0;
    if(counter == 0 || counter == n){
      ans = 0;
    }
    else if(counter % 2 == 1){
      ans = n - (counter);
    }
    else{
      ll even = n - counter;
      ans = min(even,counter/2);
    }
    cout << ans << endl;
  }
  return 0;
}