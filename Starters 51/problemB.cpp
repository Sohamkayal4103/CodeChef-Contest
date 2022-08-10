//author: Dwight Schrute
#include <bits/stdc++.h>
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
    for(ll i = 0;i < n;i++){
      cin >> arr[i];
    }
    ll maxi = *max_element(arr.begin(), arr.end());
    vector<ll>mpp(maxi+1,0);
    for(ll i = 0;i < n;i++){
      mpp[arr[i]]++;
    }
    sort(mpp.begin(),mpp.end());
    ll n1 = mpp.size();
    if(mpp.size() == 1){
      cout << "NO" << endl;
    }
    else{
      if(mpp[n1-1] == mpp[n1-2]){
        cout << "NO" << endl;
      }
      else{
        cout << "YES" << endl;
      }
    }
  }
}