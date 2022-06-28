#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    for(ll i =0;i < 76;i++){
      
    }
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for(ll i =0;i < n;i++){
      if(s[i] == 'A'){
        cout << 'T' ;
      }
      else if(s[i] == 'T'){
        cout << 'A' ;
      }
      else if(s[i] == 'C'){
        cout << 'G' ;
      }
      else if(s[i] == 'G'){
        cout << 'C' ;
      }
    }
    cout << endl;
  }
}