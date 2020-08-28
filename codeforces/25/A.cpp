#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using pll = pair<ll, ll>;
#define endl "\n"
#define space " "
#define TLE_na_ho ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE 1024
#define MOD 1000000007
#define pb push_back
#define fi first
#define se second
#define f(a,n) for(ll i=a;i<n;i++)
#define fe(a,n) for(ll i=a;i<=n;i++)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space


int main()
{
    TLE_na_ho;
    int n;
    cin>>n;
    int a[n],eo[2]={0};
    f(0,n){
    	cin>>a[i];
    	if(a[i]%2==0)
    		eo[0]++;
    	else
    		eo[1]++;
    }
    int maxi=eo[0];
    int pos=0;
    if(eo[1]>maxi)
    {
    	maxi=eo[1];
    	pos=1;
    }
    int ans;
    if(pos==0)
    {
    	f(0,n)
    	{
    		if(a[i]%2!=0){
    			ans=i+1;
    			break;
    		}
    	}
    }
    else
    {
    	f(0,n)
    	{
    		if(a[i]%2==0){
    			ans=i+1;
    			break;
    		}
    	}
    }

    cout<<ans;

}
