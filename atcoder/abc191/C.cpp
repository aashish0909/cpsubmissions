#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    //read the question properly

    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (auto &i : a)
        cin >> i;

    int cnt = 0, ans = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            cnt = 0;
            if (a[i][j] == '#')
                ++cnt;
            if (a[i + 1][j] == '#')
                ++cnt;
            if (a[i][j + 1] == '#')
                ++cnt;
            if (a[i + 1][j + 1] == '#')
                ++cnt;

            if (cnt == 1 || cnt == 3)
                ++ans;
        }
    }

    cout << ans;
}

int32_t main()
{
    aashish_999;

    int testcases = 1;
    //cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}