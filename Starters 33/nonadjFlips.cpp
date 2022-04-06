#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    vector<ll> arr;
    for(ll i=0;i<s.size();i++){
      if(s[i] == '1'){
        arr.push_back(i);
      }
    }
    if(arr.size() == 0){
      cout << 0 << endl;
      continue;
    }
    int signal = 0;
    for(ll i=0;i<arr.size()-1;i++){
      if(arr[i+1] - arr[i] == 1){
        signal = 1;
      }
    }
    if(signal == 1){
      cout << 2 << endl;
    }
    else{
      cout << 2 << endl;
    }
  }
  return 0;
}