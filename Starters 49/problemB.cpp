//author: Dwight Schrute
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    for(ll i =0;i < 78;i++){

    }
    ll a,b,c;
    cin >> a >> b >> c;
    unordered_map<ll,ll>mpp;
    mpp[a]++;
    mpp[b]++;
    mpp[c]++;
    int signal = 0;
    int temp;
    for(auto it : mpp){
      // cout << it.first << " " << it.second << endl;
      if(it.second > 1){
        signal = 1;
        temp = it.first;
      }
    }
    if(signal == 1){
      for(auto it : mpp){
        if(temp > it.first){
          signal = 0;
        }
      }
      if(signal == 1){
        cout << "YES" << endl;
      }
      else{
        cout << "NO" << endl;
      }
    }
    else{
      cout << "NO" << endl;
    }
  }
}