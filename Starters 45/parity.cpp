//author-dwight Schrute
#include <bits/stdc++.h>
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
    for(ll i = 0; i < n; i++){
      cin >> arr[i];
    }
    vector<ll>ans(n,5);
    if(arr[0] == 0){
      ans[0] = 2;
    }
    else{
      ans[0] = 1;
    }
    for(ll i = 0; i < n-1; i++){
      if(arr[i] == 0){
        ll curr = ans[i];
        if(ans[i] % 2 == 0){
          ans[i+1] = 2;
        }
        else{
          ans[i+1] = 1;
        }
      }
      else{
        ll curr = ans[i];
        if(ans[i] % 2 == 0){
          ans[i+1] = 1;
        }
        else{
          ans[i+1] = 2;
        }
      }
    }
    ll temp;
    ll curr = ans[n-1];
    if(arr[n-1] == 0){
      if(curr % 2 == 0){
        temp = 2;
      }
      else{
        temp = 1;
      }
    }
    else{
      if(curr % 2 == 0){
        temp = 1;
      }
      else{
        temp = 2;
      }
    }
    if(temp == ans[0]){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }
}