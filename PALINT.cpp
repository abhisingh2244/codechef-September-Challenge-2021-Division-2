
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll n,x;
	    cin>>n>>x;
	    map<ll, int>m;
	    vector<ll> v;
	    for (int i = 0; i < n; i++) {
	        int a;
	        cin >> a;
	        v.push_back(a);
	        m[a]++;
	    }
	    int ans = 0, count = 0;
	    for (ll i : v) {
	        if ((i != i^x ) && ans < m[i] + m[i^x]){
	            ans = m[i]+m[i^x];
	            count = m[i^x];
	        } else if((i != i^x) && ans == m[i]+m[i^x] && count > m[i^x]){
	            ans = m[i]+m[i^x];
	            count = m[i^x];
	        } else if(ans < m[i]){
	            ans = m[i];
	            count  = 0;
	        }
	    }
	    cout<<ans<<" "<<count<<endl;
	}
	return 0;
}