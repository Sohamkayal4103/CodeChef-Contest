#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    vector<ll>arr(n);
    for(ll i =0;i < n;i++){
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<ll>oddArr,evenArr;
    for(auto it : arr){
      if(it % 2 ==  0){
        evenArr.push_back(it);
      }
      else{
        oddArr.push_back(it);
      }
    }
    // for(auto it: oddArr){
    //   cout << it << " ";
    // }
    // cout << endl;
    // for(auto it : evenArr){
    //   cout << it << " ";
    // }
    ll oddSum1=0,oddSum2=0,evenSum1=0,evenSum2=0;
    for(ll i =0;i <oddArr.size();i++){
      if(i % 2 == 0){
        oddSum1 += oddArr[i];
      }
      else if(i % 2 == 1){
        oddSum2 += oddArr[i];
      }
    }
    for(ll i = 0;i < evenArr.size();i++){
      if(i % 2 == 0){
        evenSum1 += evenArr[i];
      }
      else if(i % 2 == 1){
        evenSum2 += evenArr[i];
      }
    }
    ll alice = 0,bob=0;
    ll poss1 = max(oddSum1,oddSum2) + min(evenSum1,evenSum2);
    ll poss2 = max(evenSum2,evenSum1) + min(oddSum2,oddSum1);
    alice = max(poss1,poss2);
    cout << alice << endl;
    // cout << endl;
  }
}