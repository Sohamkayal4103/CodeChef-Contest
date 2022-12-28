//author: Dwight Schrute
#include<bits/stdc++.h>
#define ll long long
using namespace std;
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
    int signal = 0;
    for(ll i = 0;i < n-1;i++){
      if(s[i] == '0' && s[i+1] == '1'){
        signal = 1;
      }
    }
    for(ll i = 1;i < n;i++){
      if(s[i] == '1' && s[i-1] == '0'){
        signal = 1;
      }
    }
    if(signal == 0){
      cout << s << endl;
    }
    else{
      ll ct0 = 0,ct1 = 0;
      for(ll i = 0;i < n;i++){
        if(s[i] == '0'){
          ct0++;
        }
        else{
          ct1++;
        }
      }
      string ans = "";
      while(ct0 > 0){
        ans += "0";
        ct0--;
      }
      while(ct1 > 0){
        ans += "1";
        ct1--;
      }
      cout << ans << endl;
    }
  }
}