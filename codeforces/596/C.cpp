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
#define aout(arr,n) for(ll i1=0;i1<n;i1++ ) cout<<arr[i1].ff<<" "
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)


bool my(const pair <ll, pair<ll, ll>> &a, const pair <ll, pair<ll, ll>> &b)
{
    if(a.ff == b.ff)
    {
        if(a.ss.ss == b.ss.ss)
            return(a.ss.ff < b.ss.ff);
        else
            return(a.ss.ss < b.ss.ss);
    }
    else
        return(a.ff < b.ff);
}


void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> points, ans(n);
    vector <pair<ll, pair<ll, ll>>> c;
    f(n)
    {
        ll x, y;
        cin >> x >> y;
        c.pb({y - x, {y, x}});
    }

    f(n)
    {
        ll x;
        cin >> x;
        points.pb({x, i});
    }

    sort(all(c), my);
    sort(all(points));
    bool f = true;

    for(ll i = 0; i < n; i++)
    {
        if(c[i].ff != points[i].ff)
            f = false;
        ans[points[i].ss].ff = c[i].ss.ss;
        ans[points[i].ss].ss = c[i].ss.ff;
    }

    for(ll i = 1; i < n; i++)
    {
        if(ans[i].ff > ans[i - 1].ff)
            continue;
        else if(ans[i].ss > ans[i - 1].ss)
            continue;
        else
            f = false;
    }

    if(f)
    {
        cout << "YES" << endl;
        for(auto [x, y] : ans)
            cout << x << " " << y << endl;
    }
    else
        cout << "NO" << endl;

}

int main()
{
    aashish_999;

    ll testcases = 1;
    //   cin >> testcases;
    while(testcases--)
    {
        solve();
    }
}