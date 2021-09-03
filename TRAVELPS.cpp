#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    string s;
	    cin>>s;
	    int tt=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='0')
	              tt+=a;
	        else
	           tt+=b;
	    }
	    cout<<tt<<endl;
	}
	return 0;
}
