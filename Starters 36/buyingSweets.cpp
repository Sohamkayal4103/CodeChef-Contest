#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,r;
    cin >> n >> r;
    vector<ll>arr(n);
    vector<ll>cashBack(n);
    for(ll i = 0; i < n; i++){
      cin >> arr[i];
    }
    for(ll i = 0; i < n; i++){
      cin >> cashBack[i];
    }
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    for(ll i = 0; i < n; i++){
      ll loss = arr[i]-cashBack[i];
      pq.push(make_pair(loss,i));
    }
    ll count = 0;
    while(!pq.empty()){
      auto it = pq.top();
      ll loss = it.first;
      ll shop = it.second;
    //   while(r >= arr[shop]){
    //     r -= loss;
    //     count++;
    //   }
    if(r >= arr[shop]){
        ll diff = r-arr[shop];
        ll c1 = 1 + (diff/loss);
        r -= (loss*c1);
        count += c1;
        // cout << c1 << endl;
    }
      
      pq.pop();
    }
    cout << count << endl;
  }
}