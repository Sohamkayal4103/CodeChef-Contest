#include <iostream>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--){
	    ll a,b,c,d;
	    cin >> a >> b >> c >> d;
	    if(a <=c && b <= d){
	        cout << "POSSIBLE" << endl;
	    }
	    else{
	        cout << "IMPOSSIBLE" << endl;
	    }
	}
	return 0;
}
