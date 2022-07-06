#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    vector<ll>arr(n);
    for(ll i =0;i < n;i++){
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<ll>attack(n);
    vector<ll>defence(n);
    defence[0] = 1000-arr[0];
    attack[n-1] = arr[n-1];
    for(ll i =1;i < n;i++){
      defence[i] = defence[i-1]+(1000-arr[i]);
    }
    for(ll i = n-2;i >= 0;i--){
      attack[i] = attack[i+1]+arr[i];
    }
    // for(auto it : defence){
    //   cout << it << " ";
    // }
    // cout << endl;
    // for(auto it : attack){
    //   cout << it << " ";
    // }
    // cout << endl;
    ll product = 0;
    for(ll i = 0;i < n-1;i++){
      product = max(product,defence[i]*attack[i+1]);
    }
    cout << product << endl;
  }
}