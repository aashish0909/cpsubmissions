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
    ll a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    ll sum = a[1] + a[2] + a[0];
    ll ml = sum / 9;
    bool f = false;
    if(sum % 9 == 0)
    {
        if(a[0] >= ml && a[1] >= ml && a[2] >= ml)
            f = true;
    }
    else
        f = false;

    if(f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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