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
    int n, k;
    cin >> n >> k;
    int ans[k] = {0};
    int extra = n - k;
    map<int, int> cnt;
    for (int i = 1; i <= k; i++) ++cnt[i];

    int st = k - 1;
    for (int i = k - extra; i < k; i++) {
        ans[i] = st;
        --cnt[st];
        --st;
    }
    int j = 0;
    for (auto [key, val] : cnt) {
        if (val > 0) {
            ans[j] = key;
            ++j;
        }
    }
    for (int i = 0; i < k; i++) cout << ans[i] << " ";
    cout << endl;

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