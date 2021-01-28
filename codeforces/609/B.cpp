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
    map<int, int> books;
    for (int i = 0; i < n; i++) cin >> a[i], ++books[a[i]];

    int ans = 0;

    for (int i = 1; i <= m; i++)
        for (int j = i + 1; j <= m; j++) ans += books[i] * books[j];

    cout << ans;
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