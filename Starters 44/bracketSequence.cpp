#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    for(ll i =0;i < 75;i++){
      
    }
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll i = 0,j = n-1;
    ll ans = 0;
    while(i <= j){
      if(s[i] == '(' && s[j] == '('){
        ans += 1;
        j--;
      }
      else if(s[i] == ')' && s[j] == ')'){
        i++;
        ans += 1;
      }
      else if(s[i] == '(' && s[j] == ')'){
        i++;
        j--;
      }
      else{
        ans += 2;
        i++;
        j--;
      }
      
    }
    cout << ans << endl;
  }
}