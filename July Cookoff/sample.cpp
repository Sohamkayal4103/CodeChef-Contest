#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    vector<ll>arr={1,2,4,3,5,6,8,7,9,10,11};
    ll temp = arr[0];
    int flag = 0;
    for(ll i =1;i < arr.size()-1;i++){
      ll temp2 = temp ^ arr[i];
      if(temp2 == arr[i+1]){
        flag = 1;
        break;
      }
      else{
        temp = temp2;
      }
    }
    if(flag == 1){
      cout << "NO" << endl;
    }
    else{
      cout << "YES" << endl;
    }

  }
  return 0;
}