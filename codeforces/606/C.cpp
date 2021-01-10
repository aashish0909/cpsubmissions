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
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    map<int, int> position;

    for (int i = 1; i <= n; i++) position[a[i]] = i;

    int count = 0, prev = position[1], temp = 1;

    for (auto [key, val] : position) {
        if (val > prev) prev = val, ++temp;
        else prev = val, temp = 1;
        count = max(count, temp);
    }
    count = max(count, temp);
    int between = n - count;

    cout << between;

}

int32_t main()
{
    aashish_999;

    int testcases = 1;
    // cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}