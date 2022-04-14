#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    if(n == 3 || n == 1){
      cout << -1 << endl;
    }
    else if(n % 2 == 0){
      for(ll i = 1;i <= n;i++){
        if(i % 2 == 0){
          cout << i-1 << " ";
        }
        else{
          cout << i+1 << " ";
        }
      }
      cout << endl;
    }
    else{
      cout << 2 << " " << 5 << " " << 1 << " " << 3 << " " << 4 << " " ;
      for(ll i = 6;i <= n;i++){
        if(i % 2 == 1){
          cout << i-1 << " ";
        }
        else{
          cout << i+1 << " ";
        }
      }
      cout << endl;
    }
  }
  return 0;
}