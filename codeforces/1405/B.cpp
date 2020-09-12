#include <bits/stdc++.h>
using namespace std;

using ll =                   long long int;
using pll =                  pair<ll, ll>;
#define endl                 "\n"
#define space                " "
#define TLE_na_ho            ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE             1024
#define MOD                  1000000007
#define pb                   push_back
#define fi                   first
#define se                   second
#define rep(i,a,n)           for(ll i=a;i<n;i++)
#define repe(i,a,n)          for(ll i=a;i<=n;i++)
#define repr(i,a,n)          for(ll i=a;i>=n;i--)
#define ain(arr,n)           for(ll i1=0;i1<n;i1++ ) cin>>arr[i1];
#define aout(arr,n)          for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space;


int main()
{
    TLE_na_ho;
    ll t;
    cin >> t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll total=0;
    	ll a[n];
    	ain(a,n);
    	rep(i,0,n)
    	{
    		if(a[i]<0)
    		{
    			if(total>0)
    			{
    				if(total>=abs(a[i])){

    					total+=a[i];
    					a[i]=0;
    				}
    				else
    				{
    					a[i]=a[i]+total;
    					total=0;
    				}
    			}
    		}
    		else
    			total+=a[i];
    	}

    	ll sum=0;
    	rep(i,0,n)
    	{
    		if(a[i]<0)
    			sum+=abs(a[i]);
    	}

    	cout<<sum<<endl;
    }

}
