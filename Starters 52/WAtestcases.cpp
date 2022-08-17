#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>arr(n);
        for(ll i = 0;i < n;i++){
            cin >> arr[i];
        }
        string s;
        cin >> s;
        vector<ll>ans;
        for(ll i = 0;i < s.length();i++){
            if(s[i] == '0'){
                ans.push_back(arr[i]);
            }
        }
        
        sort(ans.begin(),ans.end());
        cout << ans[0] << endl;
        
    }
}