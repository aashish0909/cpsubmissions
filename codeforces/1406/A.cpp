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
    	ll a[n];
    	map<ll,ll> cnt;
    	rep(i,0,n)
    	{
    		cin>>a[i];
    		cnt[a[i]]++;
    	}

    	ll first,second;
    	repe(i,0,100)
    	{
    		if(cnt[i]>0)
    			cnt[i]--;
    		else
    		{
    			first=i;
    			break;
    		}
    	}
    	repe(i,0,100)
    	{
    		if(cnt[i]>0)
    			cnt[i]--;
    		else
    		{
    			second=i;
    			break;
    		}
    	}

    	cout<<first+second<<endl;
    }

}
