#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    int a[2 * n];
    for (int i = 0; i < n; i++) cin >> a[i], a[n + i] = a[i];
    int ans = 0;

    int x = a[0];
    for (int i = 0; i < n; i++) {
        x = min(a[i], x);
    }
    ans = x * n;
    int j = 0;
    int cnt = 0;
    int temp = 0;
    for (int i = 0; i < 2 * n; i++) {
        cnt = max(cnt, temp);
        if (a[i] > x) temp++;
        else temp = 0;
    }

    cout << ans + cnt;
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