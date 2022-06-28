#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  for(ll i =0;i < 76;i++){
      
  }
  ll t;
  cin >> t;
  while(t--){
    ll n,m;
    cin >> n >> m;
    if(n <= m){
      for(ll i =0;i < n;i++){
        for(ll j =0;j < m;j++){
          cout << 1 + ((n+1)*i) + ((i+1)*j) << " ";
        }
        cout << endl;
      }
    }
    else{
      for(ll i =0;i < n;i++){
        for(ll j = 0;j < m;j++){
          cout << 1 + ((m+1)*j) + ((j+1)*i) << " ";
        }
        cout << endl;
      }
    }
  }
}