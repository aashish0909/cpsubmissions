#include <bits/stdc++.h> 
using namespace std; 
 
#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]
#define ll long long int
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 400
 
int main() 
{
    TLE_na_ho;

    ll n,m;
    cin>>n>>m;

    ll ans=n;
    if(n%2==0)
    	ans=n/2;
    else
    	ans=((n-1)/2)+1;
    int flag=0;
    if(ans%m==0){
    	flag=1;
    }
    else{
    	while(ans<n)
    	    	{
    	    		ans=ans+1;
    	    		if(ans%m==0)
    	    		{
    	    			flag=1;
    	    			break;
    	    		}
    	    	}
    }

    if(flag)
    	cout<<ans;
    else
    	cout<<"-1";

}