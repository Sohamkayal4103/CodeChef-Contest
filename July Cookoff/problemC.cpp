//author-dwight_12
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    for(ll i = 0;i < 76;i++){

    }
    ll n;
    cin >> n;
    if(n % 3 == 0){
      cout << 0 << endl;
    }
    else if(n % 3 == 1){
      cout << 2 << endl;
    }
    else if(n % 3 == 2){
      cout << 1 << endl;
    }
  }
  return 0;
}