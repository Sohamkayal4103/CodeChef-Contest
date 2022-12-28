#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--){
	    ll n;
	    cin >> n;
	    map<ll,ll>mpp;
	    for(ll i = 0;i < n;i++){
	        ll a;
	        cin >> a;
	        mpp[a]++;
	    }
	    int signal = 0;
	    for(auto it : mpp){
	        if(it.second % 2 != 0){
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