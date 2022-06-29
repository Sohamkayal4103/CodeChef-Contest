//author-dwight Schrute
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    for(ll i =0;i < 76;i++){
      
    }
    ll s,a,b,c,count = 0;
    cin >> s >> a >> b >> c;
    ll temp = a + b;
    if(a > b){
      if(s - temp < c){
        temp -= a;
        count++;
      }
      if(s - temp < c){
        temp -= b;
        count++;
      }
    }
    else{
      if(s - temp < c){
        temp -= b;
        count++;
      }
      if(s - temp < c){
        temp -= a;
        count++;
      }
    }
    cout << count << endl;
  }
}