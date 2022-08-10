#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    // cout << s << endl;
    ll ct1 = 0;
    for(ll i = 0;i < n;i++){
      if(s[i] == '1'){
        ct1++;
      }
    }
    ll tot = ct1 * m;
    if(tot == 0){
      cout << n*m << endl;
    }
    else if(tot % 2 == 1){
      cout << 0 << endl;
    }
    else{
      tot /= 2;
      // cout << "tot is " << tot << endl;
      ll diff = tot % ct1;
      // cout << diff << endl;
      if(diff == 0){
        ll firstpos = -1,lastpos = -1;
        for(ll i = 0;i < n;i++){
          if(s[i] == '1'){
            if(firstpos == -1){
              firstpos = i;
            }
            lastpos = i;
          }
        }
        ll ans = n-lastpos;
        ans += (firstpos);
        cout << ans << endl;
      }
      else{
        ll i = 0;
        while(diff > 0){
          if(s[i] == '1'){
            diff--;
          }
          i++;
        }
        ll ans = 1; 
        while(i < n){
          if(s[i] == '1'){
            break;
          }
          ans++;
          i++;
        }
        cout << ans << endl;
      }
    }
  }
}