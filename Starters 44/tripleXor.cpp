#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  vector<ll>twoArray(21,1);
  for(ll i = 1;i < 21;i++){
    twoArray[i] = twoArray[i-1]*2;
  }
  while(t--){
    for(ll i =0;i < 75;i++){
      
    }
    ll n,k;
    cin >> n >> k;
    cout << (twoArray[n]-1)*(twoArray[n]-2) << endl;
  }
}