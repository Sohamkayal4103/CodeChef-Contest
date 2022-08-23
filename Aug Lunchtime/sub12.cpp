#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll f(vector<ll>&arr,ll i,ll ans){
  if(i == arr.size()-1){
    return ans;
  }
  ll temp1 = max(0ll,arr[i+1]/2);
  if(arr[i+1] % 2 == 1 && arr[i+1] > 0){
    temp1++;
  }
  ll sub = min(max(0ll,arr[i]),temp1);
  ll a = arr[i];
  ll b = arr[i+1];
  ll ans1 = f(arr,i+1,ans+abs(arr[i]));
  arr[i] = a;
  arr[i+1] = b;
  ll ans2 = f(arr,i+1,ans+abs(arr[i]));
  return min(ans1,ans2);
}

int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    vector<ll>arr(n);
    for(ll i = 0;i < n;i++){
      cin >> arr[i];
    }
    ll ans = f(arr,0,0);
    cout << ans << endl;
  }
}