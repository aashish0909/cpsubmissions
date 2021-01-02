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
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>//s.order_of_key(val) *s.find_by_order(ind)
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> f, b;
    bool possible = true, condition = true;
    map<ll, ll> fkadu, fkapos;

    for(ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        f.pb(x);
        fkadu[x]++;
        fkapos[x] = i;
    }

    for(ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        b.pb(x);
    }

    for(ll i = 0; i < m; i++)
    {
        if(fkadu[b[i]] > 1) possible = false;
        else if(fkadu[b[i]] == 0) possible = false, condition = false;
    }

    if(!possible)
    {
        if(condition) cout << "Ambiguity";
        else cout << "Impossible";
        return;
    }

    ll ans[m];

    for(ll i = 0; i < m; i++)
    {
        ans[i] = fkapos[b[i]] + 1;
    }

    cout << "Possible" << endl;
    aout(ans, m);

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