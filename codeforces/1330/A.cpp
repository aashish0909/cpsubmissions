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
    //testcases=1;
    cin>>testcases;
    while(testcases--){
		ll n,x;
		cin>>n>>x;
		ll a[n];
		int pos[201];
		memset(pos,0,sizeof(pos));
		f(n){
			cin>>a[i];
			pos[a[i]-1]=1;
		}
		ll j=0;
		while(x>0){
			if(pos[j]==0)
			{
				pos[j]=1;
				--x;
			}
			j++;
		}
		ll ans;
		rep(i,0,201)
		{
			if(pos[i]==0)
			{
				ans=i;
				break;
			}
		}
		cout<<ans<<endl;

    }

}
