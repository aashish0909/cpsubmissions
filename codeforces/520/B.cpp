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
#define f(a,n)               for(ll i=a;i<n;i++)
#define fe(a,n)              for(ll i=a;i<=n;i++)
#define fr(a,n)              for(ll i=a;i>=n;i--)
#define ain(arr,n)           for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n)          for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space


int main()
{
    TLE_na_ho;
    int n,m;
    cin>>n>>m;
    if(n==m)
    	cout<<"0"<<endl;
    else if(n>m)
    	cout<<n-m;
    else
    {
    	int cnt=0;
    	while(n<m)
    	{
    		++cnt;
    		if(m%2)
    			m++;
    		else
    			m/=2;
    	}
    	cout<<abs(cnt+n-m);
    }

}
