//author: Dwight Schrute
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
        ll num1 = 0;
        unordered_map<ll,ll>mpp,mpp2;
        for(ll i = 0;i < n;i++){
            ll x;
            cin >> x;
            if(x > num1){
                num1 = x;
            }
            mpp[x]++;
        }
        for(auto it: mpp){
            if(it.second > 1){
                mpp2[it.first] = it.second;
            }
        }
        ll temp = 0;
        for(auto it : mpp2){
            if(it.second > temp){
                temp = it.second;
            }
        }
        // for(auto it : mpp2){
        //     cout << it.first << ": " << it.second << endl;
        // }
        // cout << "temp = " << temp << endl;
        vector<ll>arr;
        for(auto it : mpp){
            if(it.second == 1){
                arr.push_back(it.first);
            }
        }
        ll n1 = arr.size();
        ll ans  = 0;
        
        if(n1 == 1 && arr[0] == num1){
            if(temp == 2){
                ans = 2;
            }
            else{
                ans = 1;
            }
        }
        else{
            ans = n1/2;
            if(n1 % 2 == 1){
                ans++;
            }
        }
        cout << ans << endl;
    }
}