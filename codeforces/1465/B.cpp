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

bool fair(ll n)
{
    ll r = n;
    bool f = true;
    while(n != 0)
    {
        ll y = n % 10;
        if(y != 0)
        {
            if(r % y != 0)
                f = false;
        }
        n /= 10;
    }
    return f;
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = -1;
    for(ll i = n;; i++)
    {
        if(fair(i))
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

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