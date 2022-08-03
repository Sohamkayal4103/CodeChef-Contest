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
    ll n;
    cin >> n;
    if(n == 3){
      cout << 3 << " " << 2 << " " << 1 << endl;
    }
    else if(n == 4){
      cout << 3 << " " << 2 << " " << 1 << " " << 4 << endl;
    }
    else{
      vector<ll>arr(n);
      for(ll i = 0;i < n;i++){
        arr[i] = i+1;
      }
      if(n > 4){
        if(arr[n-3] > arr[0]){
          ll temp = arr[0];
          arr[0] = arr[n-3];
          arr[n-3] = temp;
        }
        ll temp = arr[n-2];
        arr[n-2] = arr[0];
        arr[0] = temp;
      }
      if(n > 5){
        if(arr[n-4] > arr[1]){
          ll temp = arr[n-4];
          arr[n-4] = arr[1];
          arr[1] = temp;
        }
      }
      for(ll i = 0;i < n;i++){
        cout << arr[i] << " ";
      }
      cout << endl;
    }
  }
}