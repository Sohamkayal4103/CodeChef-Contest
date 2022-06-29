#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll m = 1000000000+7;
  ll t;
  cin >> t;
  vector<ll>twoArray(1000001,1);
  for(ll i =1;i < 1000001;i++){
    twoArray[i] = (twoArray[i-1]*2)%m;
  }
  while(t--){
    for(ll i =0;i < 75;i++){
      
    }
    ll n,x;
    cin >> n >> x;
    cout << ((x%m) * (twoArray[n-1]%m) )%m<< endl;
  }
}