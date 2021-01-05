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
    ll n, k;
    cin >> n >> k;
    ll s[n];
    ain(s, n);
    if (n == k) {
        cout << s[n - 1];
        return;
    }

    ll ans = 0;

    if (n <= k)
        ans = s[n - 1];
    else
    {
        ll single = 2 * k - n;
        ll rest = n - single;
        //cout<<rest<<endl;
        ans = s[n - 1];
        for (ll i = 0; i < rest / 2; i++)
            ans = max(ans, s[i] + s[rest - i - 1]);
    }

    cout << ans;
}

int main()
{
    aashish_999;

    ll testcases = 1;
    // cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}