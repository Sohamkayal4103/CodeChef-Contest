//Author : Michael Scott
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    for(ll i = 0;i < 78;i++){
        
    }
	// your code goes here
	ll t;
	cin >> t;
	while(t--){
	    ll n;
	    cin >> n;
	    vector<ll>arr(n);
	    for(ll i = 0;i < n;i++){
	        cin >> arr[i];
	    }
	    ll ct = 0;
	    for(auto it : arr){
	        if(it == 0){
	            ct++;
	        }
	    }
	    if(ct % 2 == 1){
	        cout << "NO" << endl;
	    }
	    else{
	        cout << "YES" << endl;
	    }
	}
	return 0;
}