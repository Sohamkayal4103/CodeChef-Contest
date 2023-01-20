#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        ll temp = __gcd(a,b);
        cout << a - temp << endl;
    }
}