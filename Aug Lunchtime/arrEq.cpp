//Author: Dwight Schrute
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
        map<ll,ll>mpp;
        for(ll i = 0;i < n;i++){
            ll x;
            cin >> x;
            mpp[x]++;
        }
        int signal = 0;
        if(n % 2 == 1){
            n++;
        }
        for(auto it : mpp){
            if(it.second > (n/2)){
                signal = 1;
                break;
            }
        }
        if(signal == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}