//author: Dwight Schrute
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        for(ll i =0;i < 78;i++){
            
        }
        ll n;
        cin >> n;
        vector<ll>arr(n);
        for(ll i = 0;i < n;i++){
            cin >> arr[i];
        }
        ll n1,n2;
        for(ll i =0;i < n;i++){
            if(arr[i] == 1){
                n1 = i;
            }
            if(arr[i] == n){
                n2 = i;
            }
        }
        ll count = 0;
        // cout << n1 << " " << n2 << endl;
        count += n1;
        count += ((n-1)-n2);
        if(n1 > n2){
            count--;
        }
        cout << count << endl;
    }
}
