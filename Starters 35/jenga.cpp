#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    if(x % n == 0 && x/n >= 1){
	        cout << "YES" << endl;
	    } 
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}