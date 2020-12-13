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
#define fakeacc ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min({a, b, c, d});
}

int main()
{
    fakeacc;

    ll testcases = 1;
    // cin >> testcases;
    while(testcases--)
    {
        solve();
    }
}