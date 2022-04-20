#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        if(k == 0){
            ll ans = (k+n)%4;
            if(ans == 0){
                cout << "Off" << endl;
            }
            else{
                cout << "On" << endl;
            }
            
        }
        //torch is on and states can be 1,2 or 3
        else if(k == 1){
            if(n % 4 == 0){
                cout << "On" << endl;
            }
            else{
                cout << "Ambiguous" << endl;
            }
        }
    }
}