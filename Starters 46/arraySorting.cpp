//author: Dwight Schrute
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  for(ll i =0;i < 78;i++){

  }
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    vector<ll>arr(n+1);
    for(ll i =1;i <= n;i++){
      cin >> arr[i];
    }
    vector<ll>diff;
    for(ll i =1;i <= n;i++){
      if(abs(arr[i]-i) > 0){
        diff.push_back(abs(arr[i]-i));
      }
    }
    sort(diff.begin(), diff.end());
    // for(auto it : diff){
    //   cout << it << " ";
    // }
    // cout << endl;
    ll temp = diff[0];
    for(ll i = 0;i < diff.size();i++){
      temp = __gcd(diff[i],temp);  
    }
    cout << temp << endl;
  }
}