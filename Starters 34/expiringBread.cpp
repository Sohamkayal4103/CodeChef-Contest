#include <iostream>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--){
	    ll n,m,k;
	    cin >> n >> m >> k;
	    ll temp;
	    if(n % k == 0){
	        temp = n/k;
	    }
	    else{
	        temp = (n/k) + 1;
	    }
	    if(temp <= m){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    
	}
	return 0;
}
