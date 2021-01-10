#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

int p(int a, int b, int mod) {
    int res = 1;
    a = a % mod;
    if (a == 0) return 0;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % mod;
        b /= 2;
        a = (a * a) % mod;
    }

    return res;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int power = p(10, n, m * m);
    int ans = power / m;
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