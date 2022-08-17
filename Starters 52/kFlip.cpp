#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll>arr(n);
    for(ll i = 0;i < n;i++){
      arr[i] = s[i] - '0';
    }
    queue<ll>q;
    for(ll i = 0;i <= n-k;i++){
      while(q.size() > 0 && q.front() < i){
        q.pop();
      }
      arr[i] = (arr[i]+q.size()) % 2;
      if(arr[i] == 1){
        arr[i] = 0;
        q.push(i+k-1);
      }
    }
    for(ll i = n-k+1;i < n;i++){
      while(q.size() > 0 && q.front() < i){
        q.pop();
      }
      arr[i] = (arr[i]+q.size()) % 2;
    }
    string ans(n,'0');
    for(ll i = 0;i < n;i++){
      ans[i] = ('0' + arr[i]);
    }
    cout << ans << endl;
  }
}