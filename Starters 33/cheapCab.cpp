#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int x,y;
    cin >> x >> y;
    int ans = 0;
    if(x == y){
      cout << "ANY" << endl;
    }
    else if(x > y){
      cout << "SECOND" << endl;
    }
    else if(x < y){
      cout << "FIRST" << endl;
    }

  }
  return 0;
}