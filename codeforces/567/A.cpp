#include <bits/stdc++.h>
using namespace std;

using   ll  =       long long int;
using   pll =       pair<ll, ll>;
using   vll =       vector<ll>;
#define endl        "\n"
#define space       " "
#define TLE_na_ho   ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX_SIZE    1024
#define MOD         1000000007
#define pb          push_back
#define fi          first
#define se          second
#define all(v)      v.begin(),v.end()
#define f(n)        for(ll i=0;i<n;i++)
#define rep(i,a,n)  for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n)  for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<space

ll testcases;

int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
 testcases=1;
 //   cin>>testcases;
    while(testcases--){
        ll n;
        cin>>n;
        ll a[n];
        ain(a,n);
        ll mini[n],maxi[n];
        rep(i,0,n)
        {
        	if(i==0)
        	{
        		mini[i]=a[i+1]-a[i];
        	}
        	else
        		mini[i]=min(a[i]-a[i-1],a[i+1]-a[i]);
        }
        rep(i,0,n)
        {
        	if(i==0)
        	{
        		maxi[i]=a[n-1]-a[i];
        	}
        	else
        		maxi[i]=max(a[i]-a[0],a[n-1]-a[i]);
        }
        rep(i,0,n)
        cout<<mini[i]<<space<<maxi[i]<<endl;

    }

}
