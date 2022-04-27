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
    if(arr[0] % 2 == 0 && arr[n-1] % 2 == 0){
      ll count = 0;
      for(auto it :arr){
        if(it % 2 == 0){
          count++;
        }
      }
      cout << count-1 << endl;
    }
    else if(arr[0] % 2 == 1 && arr[n-1] % 2 == 1){
      ll count  = 0;
      for(auto it :arr){
        if(it % 2 == 1){
          count++;
        }
      }
      cout << count-1 << endl;
    }
    else if(arr[n-1] % 2 == 1 && arr[0] % 2 ==0){
      vector<ll>parityVector(n);
      ll countOdd = 0,countEven = 0;
      for(ll i =0;i < n;i++){
        if(arr[i] & 1){
          parityVector[i] = 1;
          countOdd++;
        }
        else{
          parityVector[i] = 0;
          countEven++;
        }
      }
      for(ll i = 1;i < n;i++){
        parityVector[i] = parityVector[i-1] + parityVector[i];
      }
      // cout << "parityVector: " << endl;
      // for(ll i =0;i < n;i++){
      //   cout <<parityVector[i] << " ";
      // }
      // cout << endl;
      vector<ll>evenNos(n);
      vector<ll>oddNos(n);
      ll a = 0;
      for(ll i = 0;i < n;i++){
        if(arr[i] % 2 == 0){
          oddNos[i] = countOdd - parityVector[i];
          evenNos[i] = a;
          ++a;
        }
        else{
          oddNos[i] = countOdd - parityVector[i];
        }
      }
      // cout << "OddNos array: " << endl;
      // for(auto it : oddNos){
      //   cout << it << " ";
      // }
      // cout << endl;
      // cout << "EvenNos array: " << endl;
      // for(auto it : evenNos){
      //   cout << it << " ";
      // }
      // cout << endl;
      // cout << "MinJumps array: " << endl;
      vector<ll> minJumps(n);
      for(ll i = 0;i < n;i++){
        minJumps[i] = oddNos[i]+ evenNos[i];
      }
      // for(auto it : minJumps){
      //   cout << it << " ";
      // }
      // cout << endl;
      vector<ll>minJumpsf;
      for(ll i =0;i < n; i++){
        if(arr[i] % 2 == 0){
          minJumpsf.push_back(minJumps[i]);
        }
      }
      // cout <<"MinJumpsf array: " << endl;
      // for(auto it : minJumpsf){
      //   cout << it << " ";
      // }
      // cout << endl;
      cout << *min_element(minJumpsf.begin(), minJumpsf.end()) << endl;
    }
    else if(arr[n-1] % 2 == 0 && arr[0] % 2 == 1){
      ll countEven = 0,countOdd = 0;
      vector<ll>parityArr(n);
      for(ll i =0;i < n;i++){
        if(arr[i] % 2 == 1){
          parityArr[i] = 1;
          countOdd++;
        }
        else{
          parityArr[i] = 0;
          countEven++;
        }
      }
      vector<ll> evenNos(n);
      vector<ll> oddNos(n);
      for(ll i = 1;i < n;i++){
        parityArr[i] =  parityArr[i-1] + parityArr[i];
      }
      for(ll i =0;i < n;i++){
        if(arr[i] % 2 == 1){
          oddNos[i] = parityArr[i] - 1;
        }
        else{
          oddNos[i] = parityArr[i];
        }
      }
      ll a = 0;
      for(ll i =0;i < n;i++){
        if(arr[i] % 2 == 0){
          ++a;
          evenNos[i] = countEven - a;
        }
        else{
          evenNos[i] = countEven - a;
        }
      }
      vector<ll> minJumps(n);
      for(ll i =0;i < n;i++){
        minJumps[i] = evenNos[i] + oddNos[i];
      }
      vector<ll> minJumpsf;
      for(ll i =0;i < n;i++){
        if(arr[i] % 2 == 1){
          minJumpsf.push_back(minJumps[i]);
        }
      }
      cout << *min_element(minJumpsf.begin(), minJumpsf.end()) << endl;
    }

  }
}