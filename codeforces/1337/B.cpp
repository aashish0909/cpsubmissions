#include <bits/stdc++.h>
using namespace std;

#define int long long
int const mod = 1e9 + 7;
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define f(n) for(int i=0;i<n;i++)
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repe(i,a,n) for(int i=a;i<=n;i++)
#define repr(i,a,n) for(int i=a;i>=n;i--)
#define ain(arr,n) for(int i1=0;i1<n;i1++ ) cin>>arr[i1]
#define aout(arr,n) for(int i1=0;i1<n;i1++ ) cout<<arr[i1]<<" "
#define ordered_set tree<int, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int x, n, m;
    cin >> x >> n >> m;
    while (n > 0 && (x / 2) + 10 < x) {
        --n;
        x = (x / 2) + 10;
    }

    if (x <= m * 10)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    aashish_999;

    int testcases = 1;
    cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}