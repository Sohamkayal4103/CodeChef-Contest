//author: Michael Scott
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    for(ll i = 0;i < 78;i++){
        
    }
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>arr(n);
        for(ll i = 0;i < n;i++){
            cin >> arr[i];
        }
        if(n % 2 == 1){
            cout << "YES" << endl;
        }
        else{
            ll temp = 0;
            for(ll i =0;i < n-1;i++){
                temp = temp ^ arr[i];
            }
            if(temp == arr[n-1]){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}