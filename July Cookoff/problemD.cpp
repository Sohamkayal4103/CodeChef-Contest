#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    if(n == 3){
      cout << -1 << endl;
      continue;
    }
    else if(n == 4){
      cout << "1 2 4 3" << endl;
      continue;
    }
    vector<ll>odd;
    vector<ll>even;
    for(ll i = n;i > 4;i--){
      if(i % 2 == 0){
        even.push_back(i);
      }
      else if(i % 2 == 1){
        odd.push_back(i);
      }
    }
    for(ll i = 0;i < odd.size();i++){
      cout << odd[i] << " ";
    }
    cout << "1 2 4 3 ";
    for(ll i = 0;i < even.size();i++){
      cout << even[i] << " ";
    }
    cout << endl;
  }
  return 0;
}