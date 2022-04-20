#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int ans = abs(n-x);
	    cout << ans << endl;
	}
	return 0;
}