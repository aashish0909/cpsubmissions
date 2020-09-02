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
    int n,k;
    cin>>n>>k;
    int h[n];
    ll sum[n+1],count=0,min=0;
    memset(sum,0,sizeof(sum));
    f(0,n){
    	cin>>h[i];
    	count+=h[i];
    	sum[i+1]=count;
    }
    

    ll ans=sum[k];

    ll temp;
    fe(1,n-k){
    	temp=sum[i+k]-sum[i];
    	if(ans>temp)
    	{
    		ans=temp;
    		min=i;
    	}
    }

    cout<<min+1;
}
