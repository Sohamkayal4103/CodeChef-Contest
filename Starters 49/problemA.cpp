#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    string s1,s2;
    cin >> s1;
    cin >> s2;
    ll ct1 = 0,ct2 = 0;
    for(ll i =0;i < n;i++){
      if(s1[i] == '1'){
        ct1++;
      }
    }
    for(ll i =0;i < n;i++){
      if(s2[i] == '1'){
        ct1++;
      }
    }
    if(ct1 % 2 == 0){
      cout << 0 << endl;
    }
    else{
      cout << 1 << endl;
    }
  }
}