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
    ll n;
    cin >> n;
    vector<ll>arr(2*n);
    for(ll i =0;i < 2*n;i++){
      cin >> arr[i];
    }
    ll even = 0,odd = 0;
    for(ll i =0;i < 2*n;i++){
      if(arr[i] % 2 == 0){
        even++;
      }
      else{
        odd++;
      }
    }
    ll op = 0;
    if(odd > even){
      op = odd-even;
      op /= 2;
    }
    else{
      vector<ll>ans;
      for(ll i =0;i < 2*n;i++){
        if(arr[i] % 2 == 0){
          ans.push_back(arr[i]);
        }
      }
      vector<ll>c(ans.size(),0);
      for(ll i =0;i < ans.size();i++){
        while(ans[i] % 2 == 0){
          ans[i] /= 2;
          c[i]++;
        }
      }
      // cout << "Check: " << endl;
      // for(auto it : c){
      //   cout << it << " ";
      // }
      // cout << endl;
      sort(c.begin(),c.end());
      ll temp = even-odd;
      temp /= 2;
      for(ll i =0;i < temp;i++){
        op += c[i];
      }
    }
    cout << op << endl;
  }
}