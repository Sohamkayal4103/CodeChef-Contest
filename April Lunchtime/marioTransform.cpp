#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n = 2;
	    int x;
	    cin >> x;
	    n = (n+x)% 3;
	    if(n == 1){
	        cout << "SMALL" << endl;
	    }
	    else if(n == 0){
	        cout << "HUGE" << endl;
	    }
	    else if(n == 2){
	        cout << "NORMAL" << endl;
	    }
	    
	}
	return 0;
}
