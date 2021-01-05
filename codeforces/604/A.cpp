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
    double m[5], w[5];
    ain(m, 5);
    ain(w, 5);
    double hs, hu;
    cin >> hs >> hu;
    double pts[5] = {500, 1000, 1500, 2000, 2500};

    double score = 0;
    f(5)
    {
        score += max(0.3 * pts[i], ((1 - m[i] / 250) * pts[i]) - 50 * w[i]);
    }
    score += 100 * hs;
    score -= 50 * hu;
    cout << score;
}

int main()
{
    aashish_999;

    ll testcases = 1;
    //cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}