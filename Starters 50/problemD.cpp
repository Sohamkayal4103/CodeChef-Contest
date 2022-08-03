//author: Dwight Schrute
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    for(ll i = 0;i < 78;i++){
      
    }
    ll x,y;
    cin >> x >> y;
    ll temp = -1,num;
    for(ll i = 1;i*i <= y;i++){
      if(y % i == 0){
        temp = i;
        num = y/i;
      }
      // temp = i;
    }
    // cout << "Temp is: " << temp << endl;
    if(temp == -1){
      cout << -1 << endl;
    }
    else{
      ll start = min(num,temp);
      ll end = max(num,temp);
      // cout << start << " " << end << endl;
      if(x % 2 == 0){
        x /= 2;
        if(x < start){
          cout << x << " " << x << endl;
          cout << start << " " << end << endl;
        }
        else if(x > end){
          cout << start << " " << end << endl;
          cout << x << " " << x << endl;
        }
        else{
          cout << -1 << endl;
        }
      }
      else{
        x = (x/2) + 1;
        if(x-1 < start && x <start){
          cout << x-1 << " " << x << endl;
          cout << start << " " << end << endl;
        }
        else if(x > end && x-1 > end){
          cout << start << " " << end << endl;
          cout << x-1 << " " << x << endl;
        }
        else{
          cout << -1 << endl;
        }
      }
    }

  }
}