//Author: Dwight Schrute
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin >> t;
	while(t--){
	    for(ll i = 0;i < 78;i++){
	        
	    }
	    ll n,m;
	    cin >> n >> m;
	    if(n % 2 == 1){
	        cout << "NO" << endl;
	    }
	    else{
	        if(n % m == 0){
	            ll temp = n/m;
	            if(temp % 2 == 0){
	                cout << "YES" << endl;
	            }
	            else{
	                cout << "NO" << endl;
	            }
	            
	        }
	        else{
	            cout << "NO" << endl;
	        }
	    }
	}
	return 0;
}