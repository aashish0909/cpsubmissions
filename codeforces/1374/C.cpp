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
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	char a[n];
    	ain(a,n);
    	int cnt=0,ans=0;
    	for(int i=0;i<n;i++)
    	{
    		if(a[i]=='(')
    			cnt++;
    		else
    		{
    			--cnt;
    			if(cnt<0){
    				cnt=0;ans++;
    			}
    		}
    	}
    	
    	cout<<ans<<endl;
    }

}
