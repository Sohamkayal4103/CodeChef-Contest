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
	    vector<ll> arr(n);
	    for(ll i =0;i < n;i++){
	        cin >> arr[i];
	    }
	    ll fp = -1,fn = -1;
	    for(ll i =0;i < n;i++){
	        if(arr[i] > 0){
	            fp = i;
	            break;
	        }
	    }
	    for(ll i =0;i < n;i++){
	        if(arr[i] < 0){
	            fn = i;
	            break;
	        }
	    }
	    ll countp = 0,countn = 0;
	    for(ll i = fp+1;i < n;i++){
	        if(arr[i] > 0){
	            countp++;
	        }
	    }
	    for(ll i = fn+1;i < n;i++){
	        if(arr[i] < 0){
	            countn++;
	        }
	    }
	    ll pans = (countp*(countp+1))/2;
	    ll nans = (countn*(countn+1))/2;
	    ll ans = pans + nans;
	    cout << ans << endl;
	}
	return 0;
}
