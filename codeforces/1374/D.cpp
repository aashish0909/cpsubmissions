#include <bits/stdc++.h>
using namespace std;

using   ll        = long long int;
using   pll       = pair<ll, ll>;
using   vll       = vector<ll>;
ll const max_size = 1024;
ll const mod      = 1e9+7;
ll const maxn     = 1e5+1;
#define endl        "\n"
#define ssp         " "
#define n_l         cout<<"\n"
#define TLE_na_ho   ios_base::sync_with_stdio(false);cin.tie(NULL)
#define pb          push_back
#define ff          first
#define ss          second
#define all(v)      v.begin(),v.end()
#define f(n)        for(ll i=0;i<n;i++)
#define rep(i,a,n)  for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n)  for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<ssp


ll testcases;

int main()
{
    TLE_na_ho;
    //READ THE QUESTION PROPERLY!!
    //testcases=1;
    cin>>testcases;
    while(testcases--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ain(a,n);
        map<ll,ll> cnt;
        ll mx=0;
        f(n)
        {	
        	if(a[i]%k==0)
        		continue;
        	++cnt[k-a[i]%k];
        	mx=max(mx,cnt[k-a[i]%k]);
        }
        ll ans=0;
        for(auto [f,s]: cnt){
        	if(s==mx)
        		ans=k*(s-1)+f+1;
        }
        cout<<ans<<endl;
    }

}