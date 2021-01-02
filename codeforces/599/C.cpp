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
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ain(a, n);
    ll cnt = 0;
    ll mn[n + 1], mx[n + 1];
    mn[n] = 1e18;
    mn[n - 1] = a[n - 1];

    repr(i, n - 2, 0)
    mn[i] = min(mn[i + 1], a[i]);

    mx[0] = a[0];
    rep(i, 1, n)
    mx[i] = max(mx[i - 1], a[i]);

    f(n)
    {
        if(mn[i + 1] >= mx[i]) ++cnt;
    }

    cout << cnt << endl;


}

int main()
{
    aashish_999;

    ll testcases = 1;
    //  cin >> testcases;
    while(testcases--)
    {
        solve();
    }
}