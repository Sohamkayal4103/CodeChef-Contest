#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n1,n2;
    cin >> n1 >> n2;
    string s1,s2;
    cin >> s1 >> s2;
    string sf = "";
    for(ll i = 0; i < n1; i++){
      if(s1[i] == '?')
        continue;
      sf += s1[i];
    }
    ll nf = sf.length();
    ll p1 = 0,p2 = 0;
    ll i = 0;
    while(i < nf){
      if(sf[i] != s2[p1]){
        while(sf[i] != s2[p1] && i < nf){
          i++;
        }
        // cout << "Reached: " << sf[i] << endl;
        // cout << "Value of p1: " << p1 << endl;
      }
      else{
        i++;
        p1++;
      }
    }
    // cout << "Final: " << p1 << endl;
    if(p1 != n2){
      p1 = 0;
      i = 0;
      while(i < n1){
        if(s1[i] == s2[p1]){
          p1++;
          i++;
        }
        else if(s1[i] == '?'){
          if(s2[p1] != 'a'){
            s1[i] = 'a';
          }
          else{
            s1[i] = 'b';
          }
        }
        else{
          i++;
        }
      }
      cout << s1 << endl;
    }
    else{
      cout << -1 << endl;
    }
  } 
  return 0;
}