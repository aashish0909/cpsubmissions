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

    int k, a, b, v;
    cin >> k >> a >> b >> v;

    int rem=a;int ans=0;
    while(rem>0)
    {
    	++ans;
    	int sections=0;
    	if(b>k-1)
    	{
    		sections=k;
    		b-=k-1;
    	}
    	else
    	{
    		sections=b+1;
    		b=0;
    	}
    	rem-=sections*v;
    }
    

    cout << ans;




}
