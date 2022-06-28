#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>arr(n);
        for(ll i = 0;i < n;i++){
            cin >> arr[i];
        }
        vector<ll>prefix(n);
        prefix[0] = arr[0];
        for(ll i = 1;i < n;i++){
            prefix[i] = __gcd(arr[i],prefix[i-1]);
        }
        vector<ll>suffix(n);
        suffix[n-1] = arr[n-1];
        for(ll i = n-2;i >= 0 ;i--){
            suffix[i] = __gcd(arr[i],suffix[i+1]);
        }
        ll strong = 0;
        for(ll i =0;i < n;i++){
            if(i == 0 && suffix[i+1] > 1){
                strong++;
            }
            else if(i == n-1 && prefix[i-1] > 1){
                strong++;
            }
            else if(__gcd(prefix[i-1],suffix[i+1]) > 1){
                strong++;
            }
        }
        cout << strong << endl;
    }
}