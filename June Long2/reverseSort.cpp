#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    for(ll i =0;i < 76;i++){
      
    }
    ll n,k;
    cin >> n >> k;
    vector<ll>arr(n);
    for(ll i =0;i < n;i++){
      cin >> arr[i];
    }
    int flag = 0;
    ll p1 = 0,p2 = 0;
    while(p2 < n){
      if(arr[p1] > arr[p2]){
        if(arr[p1] + arr[p2] > k){
          flag = 1;
          break;
        }
        else{
          p2++;
        }
      }
      else{
        p1 = p2;
        p2++; 
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