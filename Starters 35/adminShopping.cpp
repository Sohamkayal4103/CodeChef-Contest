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
	    vector<ll>arr(n);
	    for(int i = 0;i < n;i++){
	        cin >> arr[i];
	    }
	    sort(arr.begin(),arr.end());
	    ll temp = x/arr[0];
	    if(x % arr[0] != 0){
	        temp++;
	    }
	    ll ans = max(temp,n);
	    cout << ans << endl;
	    
	}
	return 0;
}