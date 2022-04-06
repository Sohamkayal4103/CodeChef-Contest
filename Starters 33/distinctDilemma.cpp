#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
      cin >> arr[i];
    }
    ll greatNumber = 1;
    priority_queue<ll> pq;
    ll sum = 0;
    for(auto it : arr){
      sum += it;
    }
    pq.push(sum);
    while(!pq.empty()){
      ll temp = pq.top();
      pq.pop();
      if(temp - greatNumber <= 0){
        continue;
      }
      ll rem = temp - greatNumber;
      greatNumber++;
      pq.push(rem);
    }
    cout << greatNumber << endl;
  }
  return 0;
}