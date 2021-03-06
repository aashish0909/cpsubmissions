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
    sort(a, a + n);
    set<double> area;
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < n; j++)
        {
            if(i == j)
                continue;

            double tarea = 1.0 * max(a[i], a[j]) / 2.0;
            double sarea = 1.0 * min(a[i], a[j]) / 2.0;
            double aarea = tarea - sarea;
            if(aarea == 0.0)
                continue;
            area.insert(aarea);
        }
    }

    cout << area.size() << endl;
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