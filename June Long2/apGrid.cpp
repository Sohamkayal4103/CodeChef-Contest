#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  for(ll i =0;i < 76;i++){
      
  }
  ll t;
  cin >> t;
  while(t--){
    for(ll i =0;i < 76;i++){
      
    }
    ll rows,cols;
    cin >> rows >> cols;
    int transverse = 0;
    if(rows > cols) transverse = 1;
    if(transverse == 1){
      ll temp = rows;
      rows = cols;
      cols = temp;
      vector<vector<ll>>arr(rows,vector<ll>(cols));
      vector<ll>rowDiff(rows);
      vector<ll>colDiff(cols);
      ll diff = 1;
      for(ll i =0;i < rows;i++){
        rowDiff[i] = diff;
        diff = diff + 2;
      }
      diff = 2;
      for(ll i =0;i < cols;i++){
        colDiff[i] = diff;
        diff = diff + 2;
      }
      arr[0][0] = 1;
      for(ll i =1;i < rows;i++){
        arr[i][0] = arr[i-1][0] + colDiff[0];
      }
      for(ll i = 0;i < rows;i++){
        for(ll j = 1;j < cols;j++){
          arr[i][j] = arr[i][j-1] + rowDiff[i];
        }
      }
      temp = rows;
      rows = cols;
      cols = temp;
      vector<vector<ll>>ans(rows,vector<ll>(cols));
      for(ll i =0;i < rows;i++){
        for(ll j = 0;j < cols;j++){
          ans[i][j] = arr[j][i];
        }
      }
      for(ll i =0;i < rows;i++){
        for(ll j = 0;j < cols;j++){
          cout << ans [i][j] << " ";
        }
        cout << endl;
      }
    }
    else{
      vector<vector<ll>>arr(rows,vector<ll>(cols));
      vector<ll>rowDiff(rows);
      vector<ll>colDiff(cols);
      ll diff = 1;
      for(ll i =0;i < rows;i++){
        rowDiff[i] = diff;
        diff = diff + 2;
      }
      diff = 2;
      for(ll i =0;i < cols;i++){
        colDiff[i] = diff;
        diff = diff + 2;
      }
      arr[0][0] = 1;
      for(ll i =1;i < rows;i++){
        arr[i][0] = arr[i-1][0] + colDiff[0];
      }
      for(ll i = 0;i < rows;i++){
        for(ll j = 1;j < cols;j++){
          arr[i][j] = arr[i][j-1] + rowDiff[i];
        }
      }
      for(ll i =0;i < rows;i++){
        for(ll j = 0;j < cols;j++){
          cout << arr [i][j] << " ";
        }
        cout << endl;
      }
    }
  }
}