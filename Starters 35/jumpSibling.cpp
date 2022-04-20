#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll returnMinimumSteps1(vector<ll>evenArray,vector<ll>oddArray){
  return 0;
}
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    vector<ll>arr(n);
    for(ll i = 0;i < n;i++){
      cin >> arr[i];
    }
    
    vector<ll>oddArray;
    vector<ll>evenArray;
    for(ll i =0;i <n;i++){
      if(arr[i] % 2 == 0){
        evenArray.push_back(i);
      }
      else{
        oddArray.push_back(i);
      }
    }
    if(arr[0] % 2 == 0 && arr[n-1] % 2 == 0){
      cout << evenArray.size()-1 << endl;
    }
    else if(arr[0] % 2 == 1 && arr[n-1] % 2 == 1){
      cout << oddArray.size()-1 << endl;
    }
    else{
      if(arr[0] % 2 == 0 && arr[n-1] % 2 == 1){
        vector<ll>evenNext(evenArray.size());
        for(ll i =evenArray.size()-1; i >= 0;i--){
          for(ll j =0;j < oddArray.size();j++){
            if(oddArray[j] > evenArray[i]){
              evenNext[i] = j;
            }
          }
        }
        ll value = oddArray.size()-1;
        for(ll i =0;i < oddArray.size();i++){
          oddArray[i] = value;
          value--;
        }
        for(ll i =0;i < evenNext.size();i++){
          evenNext[i] = oddArray[evenNext[i]] + 1;
        }
      }
    }
  }
}