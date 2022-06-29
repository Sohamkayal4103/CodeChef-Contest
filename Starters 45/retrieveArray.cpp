//author-dwight Schrute
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  for(ll i =0;i < 76;i++){
      
    }
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
      cin >> arr[i];
    }
    ll sum = 0;
    for(ll i =0;i < n;i++){
      sum += arr[i];
    }
    sum = sum/(n+1);
    for(ll i =0;i < n;i++){
      cout << arr[i] - sum << " ";
    }
    cout << endl;
  }
}