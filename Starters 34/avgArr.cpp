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
	    ll sum = n * x;
	    vector<ll> arr(n);
	   // ll c = 1000;
	   // while(sum > 1000){
	   //     arr.push_back(c);
	   //     c--;
	   //     sum -= c;
	   // }
	   // ll s= arr.size();
	   // ll rem = n - s;
	   // if(rem % 2 == 0){
	   //     ll cnt= 2;
	   //     arr.push_back(sum-1);
	   //     arr.push_back(1);
	   //     rem -= 2;
	   //     while(rem > 0){
	   //         if(cnt == sum-1){
	   //             cnt ++;
	   //         }
	   //         arr.push_back(cnt);
	   //         arr.push_back(cnt*-1);
	   //         rem -= 2;
	   //         cnt++;
	   //     }
	   // }
	   // else if(rem % 2 == 1){
	   //     ll cnt = 2;
	   //     arr.push_back(sum);
	   //     rem -= 1;
	   //     while(rem > 0){
	   //         if(cnt == sum){
	   //             cnt++;
	   //         }
	   //         arr.push_back(cnt);
	   //         arr.push_back(cnt * -1);
	   //         rem -= 2;
	   //         cnt++;
	   //     }
	   // }
	   // for(ll i = 0;i < arr.size();i++){
	   //     cout << arr[i] << " ";
	   // }
	   // cout << endl;
	    
	    ll cnt = 1;
	    for(ll i = 0;i < n;i++){
	        if(i % 2 == 0){
	            arr[i] = x - cnt;
	        }
	        if(i % 2 == 1){
	            arr[i] = x + cnt;
	            cnt++;
	        }
	    }
	    if(n % 2 == 1){
	        arr[n-1] = x;
	    }
	    for(ll i = 0;i < n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	   
	   
	}
	return 0;
}
