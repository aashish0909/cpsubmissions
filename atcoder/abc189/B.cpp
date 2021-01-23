#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n, x;
    cin >> n >> x;
    int v[n], p[n];
    for (int i = 0; i < n; i++) cin >> v[i] >> p[i];
    int vol = 0;
    for (int i = 0; i < n; i++) {
        vol += v[i] * p[i];
        if (vol > x * 100) {
            cout << i + 1;
            return;
        }
    }
    cout << -1;
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