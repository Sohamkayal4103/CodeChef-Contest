#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll x,y;
    cin >> x >> y;
    if(x % 2 == 0 && y % 2 == 0){
      string s1,s2;
      x /= 2;
      y /= 2;
      for(ll i = 0;i < x;i++){
        s1 += "a";
      }
      for(ll i =0;i < y;i++){
        s1 += "b";
      }
      for(ll i =0;i < y;i++){
        s1 += "b";
      }
      for(ll i = 0;i < x;i++){
        s1 += "a";
      }


      //for s2 now
      for(ll i =0;i < y;i++){
        s2 += "b";
      }
      for(ll i =0;i < x;i++){
        s2 += "a";
      }
      for(ll i =0;i < x;i++){
        s2 += "a";
      }
      for(ll i =0;i < y;i++){
        s2 += "b";
      }

      cout << s1 << endl;
      cout << s2 << endl;
    }
    else if(x % 2 == 1 && y % 2 == 1){
      cout << -1 << endl;
    }
    else{
      int signal = 0;
      if(x % 2 == 1 && y % 2 == 0 && x > 1){
        signal = 1;
      }
      else if(x % 2 == 0 && y % 2 == 1 && y > 1){
        signal = 2;
      }
      else if(x % 2 == 1 && y % 2 == 0 && x <= 1){
        signal = 3;
      }
      else if(x % 2 == 0 && y % 2 == 1 && y <= 1){
        signal = 4;
      }
      string s1,s2;
      x /= 2;
      y /= 2;
      for(ll i = 0;i < x;i++){
        s1 += "a";
      }
      for(ll i =0;i < y;i++){
        s1 += "b";
      }

      //for middle element in s1
      if(signal == 1){
        s1 += "a";
      }
      else if(signal == 2){
        s1 += "b";
      }

      for(ll i =0;i < y;i++){
        s1 += "b";
      }
      for(ll i = 0;i < x;i++){
        s1 += "a";
      }


      //for s2 now
      for(ll i =0;i < y;i++){
        s2 += "b";
      }
      for(ll i =0;i < x;i++){
        s2 += "a";
      }

      //for middle element in s2
      if(signal == 1){
        s2 += "a";
      }
      else if(signal == 2){
        s2 += "b";
      }

      for(ll i =0;i < x;i++){
        s2 += "a";
      }
      for(ll i =0;i < y;i++){
        s2 += "b";
      }
      if(signal == 3 || signal == 4){
        cout << -1 << endl;
      }
      else{
        cout << s1 << endl;
        cout << s2 << endl;
      }
    }
  }
  return 0;
}