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
    ll ans[n + 1];
    memset(ans, 0, sizeof ans);
    ans[0] = 1;
    for(ll i = 1; i <= n; i++)
    {
        ll r = i;
        while(r != 0)
        {
            if(r % 10 == 7)
            {
                ans[i] = 1;
                break;
            }
            r /= 10;
        }
        r = i;
        while(r != 0)
        {
            if(r % 8 == 7)
            {
                ans[i] = 1;
                break;
            }
            r /= 8;

        }
    }
    ll cnt = 0;
    f(n + 1)
    if(ans[i] == 0)
        cnt++;

    cout << cnt << endl;

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