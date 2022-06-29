//author-dwight Schrute
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  for(ll i =0;i < 76;i++){
      
    }
  ll t;
  cin >> t;
  while(t--){
    ll n,a,b;
    cin >> n >> a >> b;
    ll c = pow(2,n);
    c -= 1;
    
    ll temp = a ^ b;
    if(temp == c){
      cout << 0 << endl;
    }
    else{
      ll mul = 0,f;
      for(ll i =0;i <= c;i++){
        ll temp = i ^ a;
        ll num2 = i ^ b;
        ll prod = temp * num2;
        if(prod > mul){
          f= i;
          mul = prod;
        }
      }
        cout << f << endl;
      
    }
  }
}