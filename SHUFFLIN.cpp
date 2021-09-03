#include<bits/stdc++.h>
#define ll long long

using namespace std;

	 int main(){
	     int t;
	     cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int encnt,oncnt,eacnt=0,oacnt=0;

        encnt=n/2;
        if(n%2==0){
            oncnt=n/2;
        }
        else{
            oncnt=(n/2)+1;
        }

        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                eacnt++;
            }
            else{
                oacnt++;
            }
        }

        int ans1= min(encnt,oacnt);
        int ans2= min(eacnt,oncnt);
        int ans= ans1+ans2;

        cout<<ans<<endl;

    }
}