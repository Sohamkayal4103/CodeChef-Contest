#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin>> n;
        vector<ll>arr(n);
        for(ll i = 0;i < n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        for(ll i = 1;i < n;i++){
            arr[i] = __gcd(arr[0],arr[i]);
        }
        sort(arr.begin(),arr.end());
        for(ll i = 1;i < n;i++){
            arr[i] = __gcd(arr[0],arr[i]);
        }
        ll sum = 0;
        for(ll i = 0;i < n;i++){
            sum += arr[i];
        }
        cout << sum << endl;
        
    }
}