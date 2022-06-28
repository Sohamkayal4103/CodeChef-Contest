#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    for(ll i =0;i < 76;i++){
      
    }
    ll n;
    cin >> n;
    vector<ll>arr(n);
    unordered_map<ll,ll>mpp;
    for(ll i =0;i < n;i++){
      cin >> arr[i];
      mpp[arr[i]]++;
    }
    ll freq = 0;
    for(auto it : mpp){
      if(it.second > freq){
        freq = it.second;
      }
    }
    cout << n - freq << endl;
  }
}