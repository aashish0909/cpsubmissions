#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using vll = vector<ll>;
ll const mod = 1e9 + 7;
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define repe(i,a,n) for(ll i=a;i<=n;i++)
#define repr(i,a,n) for(ll i=a;i>=n;i--)
#define ain(arr,n) for(ll i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1]<<" "
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    ll n, m;
    cin >> n >> m;



    ll a[m];
    ain(a, m);

    if(m == 0)
    {
        cout << 1;
        return;
    }
    else if(m == n)
    {
        cout << 0;
        return;
    }

    sort(a, a + m);
    vll diff;

    if(a[0] > 1)
    {
        diff.pb(a[0] - 1);
    }
    if(a[m - 1] < n)
    {
        diff.pb(n - a[m - 1]);
    }

    for(ll i = 1; i < m; i++)
    {
        if(a[i] - a[i - 1] > 1)
            diff.pb(a[i] - a[i - 1] - 1);
    }

    sort(all(diff));
    ll mn = diff[0];
    ll ans = 0;
    for(auto it : diff)
    {
        ans += ceil((long double)it / mn);
    }
    cout << ans;
}

int main()
{
    aashish_999;

    ll testcases = 1;
    // cin >> testcases;
    while(testcases--)
    {
        solve();
    }
}