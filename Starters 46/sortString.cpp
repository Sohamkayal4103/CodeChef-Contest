//author:Dwight Schrute
#include <bits/stdc++.h>
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
    string s;
    cin >> s;
    ll first_one = -1,last_zero = -1;
    for(ll i =0;i < n;i++){
      if(s[i] == '1' && first_one == -1){
        first_one = i;
      }
      else if(s[i] == '0'){
        last_zero = i;
      }
    }
    ll ans = 0;
    if(last_zero == -1 || first_one == -1){
      ans = 0;
    }
    else{
      ll p1 = first_one;
      ll p2 = last_zero;
      bool toggle = false;
      while(p1 < p2){
        if(toggle == false){
          if(s[p1] == '1' && s[p2] == '0'){
            ans++;
            p1++;
            p2--;
            toggle = true;
          }
          else if(s[p1] == '0' && s[p2] == '0'){
            p1++;
          }
          else if(s[p1] == '1' && s[p2] == '1'){
            p2--;
          }
          else if(s[p1] == '0' && s[p2] == '1'){
            p1++;
            p2--;
          }
        }
        else{
          if(s[p1] == '0' && s[p2] == '1'){
            ans++;
            p1++;
            p2--;
            toggle = false;
          }
          else if(s[p1] == '1' && s[p2] == '1'){
            p1++;
          }
          else if(s[p1] == '0' && s[p2] == '0'){
            p2--;
          }
          else if(s[p1] == '1' && s[p2] == '0'){
            p1++;
            p2--;
          }
        }
      }
    }
    cout << ans << endl;
  }
}