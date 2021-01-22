#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

int dp[100006];

int ans(int a[], int m, int n) {
    if (m == n - 1) {
        return 0;
    }
    if (dp[m] != -1)
        return dp[m];
    if (n - 1 - m > 1) {
        return dp[m] = min(abs(a[m] - a[m + 1]) + ans(a, m + 1, n), abs(a[m] - a[m + 2]) + ans(a, m + 2, n));
    }
    else {
        return dp[m] = abs(a[m] - a[m + 1]) + ans(a, m + 1, n);
    }

}

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    memset(dp, -1, sizeof dp);
    cout << ans(a, 0, n);
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