//author: Dwight Schrute
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    for(ll i = 0;i < 78;i++){

    }
    ll t;
    cin >> t;
    while(t--){
        ll n,y;
        cin >> n >> y;
        vector<ll>arr(n);
        for(ll i = 0;i < n;i++){
            cin >> arr[i];
        }
        ll temp = 0;
        for(ll i = 0;i < n;i++){
            temp = temp | arr[i];
        }
        string ans = "";
        for(ll i = 31;i >= 0;i--){
            ll k = temp >> i;
            if(k & 1){
                ans += "1";
            }
            else{
                ans += "0";
            }
        }
        string ans1 ="";
        for(ll i = 31;i >= 0;i--){
            ll k = y >> i;
            if(k & 1){
                ans1 += "1";
            }
            else{
                ans1 += "0";
            }
        }
        int signal = 0;
        string ansf = "";
        // for(ll i = 0;i < 32;i++){
        //     if(ans[i] == '1' && ans1[i] == '0'){
        //         signal = 1;
        //     }
        //     else if(ans[i] == '0' && ans1[i] == '1'){
        //         ansf = "1";
        //     }
        //     else{
        //         cout << "followed this"  << i << endl; 
        //         ansf += "0";
        //     }
        // }
        for(ll i = 31;i >= 0;i--){
            if(ans[i] == '1' && ans1[i] == '0'){
                signal = 1;
            }
            else if(ans[i] == '0' && ans1[i] == '1'){
                ansf += "1";
            }
            else{
                ansf += "0";
            }
        }
        reverse(ansf.begin(),ansf.end());
        // cout << ans << endl;
        // cout << ans1 << endl;
        // cout << ansf << endl;
        if(signal == 1){
            cout << -1 << endl;
        }
        else{
            ll z = 0;
            ll ct = 0;
            for(ll i = ansf.length()-1;i >= 0;i--){
                if(ansf[i] == '1'){
                    z += pow(2,ct);
                }
                ct++;
            }
            cout << z << endl;
        }
    }
}