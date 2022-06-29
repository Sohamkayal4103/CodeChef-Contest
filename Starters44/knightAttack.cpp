#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    for(ll i =0;i < 75;i++){
      
    }
    vector<ll>p1(2);
    vector<ll>p2(2);
    set<pair<ll,ll>>st;
    cin >> p1[0] >> p1[1];
    cin >> p2[0] >> p2[1];
    if(p1[0] + 2 <= 8 && p1[1] + 1 <= 8){
      st.insert(make_pair(p1[0]+2,p1[1]+1));
    }
    if(p1[0] + 1 <= 8 && p1[1] + 2 <= 8){
      st.insert(make_pair(p1[0]+1,p1[1]+2));
    }
    if(p1[0] - 2 >= 1 && p1[1] + 1 <= 8){
      st.insert(make_pair(p1[0]-2,p1[1]+1));
    }
    if(p1[0] - 1 >= 1 && p1[1] + 2 <= 8){
      st.insert(make_pair(p1[0]-1,p1[1]+2));
    }
    if(p1[0] - 2 >= 1 && p1[1] - 1 >= 1){
      st.insert(make_pair(p1[0]-2,p1[1]-1));
    }
    if(p1[0] - 1 >= 1 && p1[1] - 2 >= 1){
      st.insert(make_pair(p1[0]-1,p1[1]-2));
    }
    if(p1[0] + 2 <= 8 && p1[1] - 1 >= 1){
      st.insert(make_pair(p1[0]+2,p1[1]-1));
    }
    if(p1[0] + 1 <= 8 && p1[1] - 2 >= 1){
      st.insert(make_pair(p1[0]+1,p1[1]-2));
    }
    // for(auto it : st){
    //   cout << it.first << " " << it.second << endl;
    // }

    int flag = 0;
    if(p2[0] + 2 <= 8 && p2[1] + 1 <= 8){
      if(st.find(make_pair(p2[0]+2,p2[1]+1)) != st.end()){
        flag = 1;
      }
    }
    if(p2[0] + 1 <= 8 && p2[1] + 2 <= 8){
      if(st.find(make_pair(p2[0]+1,p2[1]+2)) != st.end()){
        flag = 1;
      }
    }
    if(p2[0] - 2 >= 1 && p2[1] + 1 <= 8){
      if(st.find(make_pair(p2[0]-2,p2[1]+1)) != st.end()){
        flag = 1;
      }
    }
    if(p2[0] - 1 >= 1 && p2[1] + 2 <= 8){
      if(st.find(make_pair(p2[0]-1,p2[1]+2)) != st.end()){
        flag = 1;
      }
    }
    if(p2[0] - 2 >= 1 && p2[1] - 1 >= 1){
      if(st.find(make_pair(p2[0]-2,p2[1]-1)) != st.end()){
        flag = 1;
      }
    }
    if(p2[0] - 1 >= 1 && p2[1] - 2 >= 1){
      if(st.find(make_pair(p2[0]-1,p2[1]-2)) != st.end()){
        flag = 1;
      }
    }
    if(p2[0] + 2 <= 8 && p2[1] - 1 >= 1){
      if(st.find(make_pair(p2[0]+2,p2[1]-1)) != st.end()){
        flag = 1;
      }
    }
    if(p2[0] + 1 <= 8 && p2[1] - 2 >= 1){
      if(st.find(make_pair(p2[0]+1,p2[1]-2)) != st.end()){
        flag = 1;
      }
    }
    if(flag == 1){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }
}