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
    int n;
    cin >> n;
    pll a[n];
    f(0, n)
    cin >> a[i].fi >> a[i].se;
    sort(a, a + n);
    f(0, n - 1)
    if((a[i].fi<a[i+1].fi)&&(a[i].se>a[i+1].se))
    {
    	cout<<"Happy Alex";
    	return 0;
    }

    cout<<"Poor Alex";

    }
