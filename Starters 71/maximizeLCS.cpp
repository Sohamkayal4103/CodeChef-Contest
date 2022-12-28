//author: Michael Scott
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll f(ll i,ll j,string &s,vector<vector<ll>>&dp){
  if(dp[i][j] !=  -1)return dp[i][j];
  if(i >= j)return 0;
  if(s[i] == s[j])return dp[i][j] = 1 + f(i+1,j-1,s,dp);
  else{
    return dp[i][j] = max(f(i+1,j,s,dp),f(i,j-1,s,dp));
  }
}

int main(){
  for(ll i = 0;i < 78;i++){

  }
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<vector<ll>>dp(n+1,vector<ll>(n+1,-1));
    ll ans = f(0,n-1,s,dp);
    cout << ans << endl;
  }
}