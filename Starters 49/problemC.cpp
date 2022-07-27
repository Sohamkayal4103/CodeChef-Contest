//author: Dwight Schrute
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    for(ll i = 0;i < 78;i++){
      
    }
    ll n;
    cin >> n;
    vector<ll>arr(n);
    for(ll i =0;i < n;i++){
      cin >> arr[i];
    }
    unordered_map<ll,ll>mpp;
    for(ll i =0;i < n;i++){
      mpp[arr[i]]++;
    }
    int signal = 0;
    vector<int>ans; 
    for(auto it : mpp){
      if(it.second == n){
        signal = 1;
      }
      ans.push_back(it.second);
    }
    sort(ans.begin(), ans.end());
    ll n1 = ans.size();
    if(signal == 0){
      ll temp1 = ans[n1-1];
      ll temp2 = ans[n1-2];
      if(temp1 % 2 == 0){
        temp1 = temp1/2;
      }
      else{
        temp1 = (temp1/2) + 1;
      }
      ll ans = max(temp1, temp2);
      cout << ans << endl;
    }
    else{
      if(n % 2 == 0){
        cout << (n/2) << endl;
      }
      else{
        cout << (n/2)+1 << endl;
      }
    }
  }
}