#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int q;
	cin>>q;
	while(q--)
	{ 
	    int n,l,r;
	    cin>>n>>l>>r;
	     int min=INT_MAX;
            int bas=INT_MAX;
            int ans=0;
            int minVal=INT_MAX;
            if(r>n){
               cout<<r<<endl;
            }
            else if(l<n&&n<r){
                cout<<n<<endl;
            }
            else{
                for(int i=r;i>=l;i--) {
                if(minVal==1) break;
                int sum=0;
                int temp=n;
                while(temp>0){
                    sum+=temp%i;
                    temp/=i;
                    if(sum>minVal) break;
                }
                if(minVal>sum){
                    ans=i;
                    minVal=sum;
                }
                }
                cout<<ans<<endl;
            }
        }
    }



