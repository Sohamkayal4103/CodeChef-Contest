//author:Dwight Schrute
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    for(ll i = 0;i < 78;i++){
      
    }
    ll n;
    cin >> n;
    ll p1 = 1;
    ll p2 = 0;
    if(n % 2 == 1){
      p2 = n-1;
    }
    else{
      p2 = n;
    }
    while(p1 < p2){
      cout << p2 << " " << p1 << " ";
      p2--;
      p1++;
    }
    if(n % 2 == 1){
      cout << n;
    }
    cout << endl;
  }
}