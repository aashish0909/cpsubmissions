#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

int fun(int n) {
    map<int, int> cnt;
    while (n > 0)
        ++cnt[n % 10], n /= 10;

    int g1 = 0, g2 = 0;

    for (int i = 9; i >= 0; i--)
        for (int j = 1; j <= cnt[i]; j++)
            g1 = g1 * 10 + i;
    for (int i = 0; i <= 9; i++)
        for (int j = 1; j <= cnt[i]; j++)
            g2 = g2 * 10 + i;

    return g1 - g2;
}

void solve()
{
    //read the question properly
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
        n = fun(n);
    cout << n;
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