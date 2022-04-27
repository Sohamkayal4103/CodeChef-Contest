#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if(n % 2 == 1){
      cout << "NO" << endl;
      continue;
    }
    ll count0 = 0,count1 = 0;
    for(ll i =0;i < n;i++){
      if(s[i] == '0'){
        count0++;
      }
      else{
        count1++;
      }
    }
    if(count0 == count1){
      cout << "YES" << endl;
      cout << 1 << " " << n << endl;
    }
    else if(count0 > count1){
      ll diff = count0 - (n/2);
      ll signal = 0;
      for(ll i =0;i < n;i++){
        if(s[i] == '0'){
          ll start,end,count = 0;
          start = i;
          while(s[i] != '1' && i < n){
            i++;
            count++;
          }
          i--;
          if(count >= diff){
            cout <<"YES" << endl;
            cout << start+1 << " " << start+diff+1-1 << endl;
            signal = 1;
            break;
          }
        }
      }
      if(signal == 0){
        cout << "NO" << endl;
      }
    }
    else if(count0 < count1){
      ll diff = count1 - (n/2);
      ll signal = 0;
      for(ll i =0;i < n;i++){
        if(s[i] == '1'){
          ll start,end,count = 0;
          start = i;
          while(s[i] != '0' && i < n){
            i++;
            count++;
          }
          i--;
          if(count >= diff){
            cout <<"YES" << endl;
            cout << start+1 << " " << start+diff+1-1 << endl;
            signal = 1;
            break;
          }
        }
      }
      if(signal == 0){
        cout << "NO" << endl;
      }
    }
  }
}