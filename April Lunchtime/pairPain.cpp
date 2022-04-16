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
	    vector<ll>arr(n);
	    for(ll i = 0;i < n;i++){
	        cin >> arr[i];
	    }
	    ll counter1 = 0,counter2 = 0;
	    for(auto it:arr){
	        if(it == 1){
	            counter1++;
	        }
	        else if(it == 2){
	            counter2++;
	        }
	    }
	    ll ans = 0;
	    ll others = n - counter1;
	    ans = ans + (counter1*others);
	    ll onePairs = (counter1-1)*((counter1-1)+1)/2;
	    ans += onePairs;
	    ll twopairs = (counter2-1)*((counter2-1)+1)/2;
	    ans += twopairs;
	    cout << ans << endl;
	}
	return 0;
}
