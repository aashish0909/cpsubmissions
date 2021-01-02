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
    ll sum = 0;
    vector<pair<ll, pair<ll, ll>>> votes;
    f(n)
    {
        ll x, y;
        cin >> x >> y;
        votes.pb({2 * x + y, {x, y}});
        sum += x;
    }

    sort(all(votes));
    reverse(all(votes));

    //for(auto [key, a] : votes)
    // cout << key << " " << a.ff << " " << a.ss << endl;

    ll tvo = 0;
    ll cnt = 0;

    f(n)
    {
        if(sum < tvo)
            break;
        tvo += votes[i].ss.ff + votes[i].ss.ss;
        sum -= votes[i].ss.ff;
        ++cnt;
    }
    //cout << sum << " # " << tvo << endl;

    cout << cnt;
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