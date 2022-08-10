//author:Dwight Schrute
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
    ll beg = 1;
    set<ll>st;
    st.insert(0);
    while(beg <= n){
      st.insert(beg);
      beg *= 2;
    }
    st.insert(beg);
    ll mid,op = 0;
    while(st.find(n) == st.end()){
      mid = log2(n);
      n = n - pow(2,mid);
      op++;
    }
    cout << op << endl;
  }
}