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
    ll tv1,tv2;
    cin >> tv1 >> tv2;
    ll d1,d2;
    cin >> d1 >> d2;
    if(tv1-d1 < tv2-d2){
      cout << "First" << endl;
    }
    else if(tv1-d1 == tv2-d2){
      cout << "Any" << endl;
    }
    else{
      cout << "Second" << endl;
    }
  }
}