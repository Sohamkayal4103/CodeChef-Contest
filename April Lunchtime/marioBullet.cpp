#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    int a = y/x;
	    if(a >= z){
	        cout << 0 << endl;
	    }
	    else{
	        cout << z-a << endl;
	    }
	}
	return 0;
}
