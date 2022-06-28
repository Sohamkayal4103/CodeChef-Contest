#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,k;
    cin >> n >> k;
    vector<ll>arr(n);
    for(ll i =0;i < n;i++){
      cin >> arr[i];
    }
    ll p1 = 0,p2 = 0;
    ll exist = 0;
    ll window = 0,windowMin = LLONG_MAX;
    ll found = 0;
    while(p2 < n){
      if(exist ^ arr[p2] > exist){
        window++;
        p2++;
        exist = exist ^ arr[p2];
        if(exist >= k){
          if(window < windowMin){
            windowMin = window;
            found = 1;  
            cout << "Found window from " << p1 << " to " << p2-1 << endl;
          }
        }
      }
      else{
        while(exist ^ arr[p2] < exist){
          exist = exist ^ arr[p1];
          p1++;
          window--;
        }
      }
    }
    if(found == 0){
      cout << -1 << endl;
    }
    else{
      cout << windowMin << endl;
    }
  }
}