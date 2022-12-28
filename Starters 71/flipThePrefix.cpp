//author: Michael Scott
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  for(ll i = 0;i < 78;i++){
    
  }
  ll t;
  cin >> t;
  while(t--){
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll ct0 = 0;
    ll i = 0;
    while(i < k){
      if(s[i] == '0'){
        while(i < k && s[i] == '0'){
          i++;
        }
        ct0++;
      }
      else{
        i++;
      }
    }
    ll op = LLONG_MAX;
    ll p1 = 0,p2 = k-1;
    while(p2 < n-1){
      ll temp = ct0 * 2;
      if(s[p1] == '0'){
        temp--;
      }
      op = min(op,temp);
      if(s[p2] != s[p2+1] && s[p2+1] == '0'){
        ct0++;
      }
      p2++;
      if(s[p1] != s[p1+1] && s[p1+1] == '1'){
        ct0--;
      }
      p1++;
    }
    ll temp = ct0 * 2;
    if(s[p1] == '0'){
      temp--;
    }
    op = min(op,temp);
    cout << op << endl;
  }
}