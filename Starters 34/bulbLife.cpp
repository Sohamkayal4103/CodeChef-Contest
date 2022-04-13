#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--){
	    ll n,x;
	    cin >> n >> x;
	    vector<ll> arr(n-1);
	    for(ll i = 0;i < n-1;i++){
	        cin >> arr[i];
	    }
	    ll sumf = 0;
	    for(ll i =0;i < n-1;i++){
	        sumf += arr[i];
	    }
	    ll temp = n * x;
	    ll a = 0;
	    ll ans = max(a,temp - sumf);
	    cout << ans << endl;
	}
	return 0;
}
