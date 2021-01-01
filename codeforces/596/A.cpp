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
    ll n;
    cin >> n;
    ll x[n], y[n];
    f(n)
    cin >> x[i] >> y[i];
    if(n == 1)
    {
        cout << -1 << endl;
        return;
    }
    if(n == 2)
    {
        if(x[0] != x[1] && y[0] != y[1])
            cout << abs(x[1] - x[0])*abs(y[0] - y[1]) << endl;
        else
            cout << -1 << endl;
        return;
    }

    ll pt1x, pt1y, pt2x, pt2y;
    bool f = false;
    rep(i, 0, n)
    {
        pt1x = x[i], pt1y = y[i];
        rep(j, 0, n)
        {
            if(i == j)
                continue;
            if(x[j] != pt1x && y[j] != pt1y)
            {
                pt2x = x[j], pt2y = y[j];
                f = true;
                break;
            }
        }
        if(f)
            break;
    }
    if(f)
        cout << abs(pt1x - pt2x)*abs(pt1y - pt2y) << endl;
    else
        cout << -1 << endl;
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