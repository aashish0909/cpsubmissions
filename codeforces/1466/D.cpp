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

    ll w[n];
    for(ll i = 0; i < n; i++)
        cin >> w[i];

    ll overall = 0;
    vector< pair<ll, ll> > ppp;
    ll dd[n + 1] = {0};
    for(ll i = 0; i < n - 1; i++)
    {
        ll zz, yy;
        cin >> zz >> yy;
        dd[zz]++;
        dd[yy]++;
    }

    for(ll i = 1; i <= n; i++)
    {
        ppp.push_back({w[i - 1], dd[i]});
        overall += w[i - 1];
    }
    sort(ppp.begin(), ppp.end());
    reverse(ppp.begin(), ppp.end());
    vector<ll> aXXXns;
    aXXXns.push_back(overall);
    for(pair<ll, ll> e : ppp)
    {

        for(ll j = 1; j < e.second ; j++)
        {
            overall += e.first;
            aXXXns.push_back(overall);
        }

    }

    for(ll i = 0; i < n - 1; i++)
        cout << aXXXns[i] << " ";
    cout << endl;
}

int main()
{
    aashish_999;

    ll testcases = 1;
    cin >> testcases;
    while(testcases--)
    {
        solve();
    }
}