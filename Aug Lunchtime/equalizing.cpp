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
	    ll a,b;
	    cin >> a >> b;
	    ll diff = max(a,b)-min(a,b);
	    if(diff % 2 == 1){
	        cout << "NO" << endl;
	    }
	    else{
	        cout << "YES" << endl;
	    }
	}
	return 0;
}