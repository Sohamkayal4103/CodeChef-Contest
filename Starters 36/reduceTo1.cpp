#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    ll count = 0;
    ll count2 = 0;
    int signal = 0;
    while(n > 0){
      if(n % 2 == 1 && count2 % 2 == 0){
        count++;
        break;
      }
      else if(n % 2 == 1 && count2 % 2 == 1){
        signal = 1;
      }
      else{
        while(n > 0 && n % 2 == 0){
          count2++;
          n /= 2;
        }
        if(count2 % 2 == 1){
          signal = 1;
          break;
        }
        else{
          count++;
        }
      }
    }
    if(signal == 1){
      cout << -1 << endl;
    }
    else{
      cout << count << endl;
    }
  }
}