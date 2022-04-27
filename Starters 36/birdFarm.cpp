#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    if(z % x == 0 && z % y != 0){
	        cout << "CHICKEN" << endl;
	        continue;
	    }
	    if(z % x != 0 && z % y == 0){
	        cout << "DUCK" << endl;
	        continue;
	    }
	    if(z % x == 0 && z % y == 0){
	        cout << "ANY" << endl;
	        continue;
	    }
	    else{
	        cout << "NONE" << endl;
	    }
	}
	return 0;
}