#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int r = n/5;
	    n -= r;
	    cout << n << endl;
	}
	return 0;
}