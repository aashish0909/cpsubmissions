#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);
    int cnt = 0;
    int sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (sum >= m)
            break;
        sum += a[i];
        ++cnt;
    }
    cout << cnt;
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