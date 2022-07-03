#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,m,k;
    cin >> n >> m >> k;
    vector<ll>arr(n+1);
    for(ll i =0;i , n;i++){
      ll x;
      cin >> x;
      arr[x]++;
    }
    if(k > m){
      cout << "NO" << endl;
    }
    else{
      if(arr[k] > n-m){
        cout << "NO" << endl;
      }
      else{
        int flag = 0;
        for(ll i =0;i < n;i++){
          if(arr[i] == 0){
            flag =1;
            break;
          }
        }
        if(flag == 1){
          cout << "NO" << endl;
        }
        else{
          cout << "YES" << endl;
        }
      }
    }
  }
  return 0;
}