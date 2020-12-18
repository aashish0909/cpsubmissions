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
    ll a[n];
    ain(a, n);

    ll sum = 0;
    map<ll, ll> cnt;
    for(ll i = 0; i < n; i++) sum += a[i], ++cnt[a[i]];

    vll ans;
    f(n)
    {
        --cnt[a[i]];
        if((sum - a[i]) % 2 == 0)
        {
            if(cnt[(sum - a[i]) / 2] > 0)
                ans.pb(i + 1);
        }
        ++cnt[a[i]];
    }

    cout << ans.size() << endl;
    for(auto it : ans)
        cout << it << " ";
    cout << endl;

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