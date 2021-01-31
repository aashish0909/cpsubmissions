#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n, c;
    cin >> n >> c;
    int a[n], b[n], p[n];
    map<int, int> days;
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i] >> p[i], days[a[i] - 1] += p[i], days[b[i]] -= p[i];
    int ans = 0, price = 0, present = 0;
    for (auto [key, val] : days) {
        if (key != present) {
            ans += min(c, price) * (key - present);
            present = key;
        }

        price += val;
    }

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