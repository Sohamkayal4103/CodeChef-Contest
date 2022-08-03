#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,x;
    cin >> n >> x;
    if(x < n){
      cout << -1 << endl;
    }
    else{
      ll temp = x-(n-1);
      if(temp > n){
        cout << -1 << endl;
      }
      else{
        cout << temp << " ";
        for(ll i = 1;i <= n;i++){
          if(i == temp){
            continue;
          }
          cout << i << " ";
        }
        cout << endl;
      }
    }
  }
}