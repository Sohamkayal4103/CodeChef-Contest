#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll x,y;
        cin >> x >> y;
        ll start = max(x,y);
        // cout << start << endl;
        while((start + x) % y == 0 && (start + y) % x == 0){
            start++;
        }
        cout << start << endl;
    }
}