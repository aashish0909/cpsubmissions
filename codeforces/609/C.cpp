#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int avg = 0;
    for (int i = 0; i < n; i++) cin >> a[i], avg += a[i];

    sort(a, a + n);
    int ans = 0;
    int rem = avg % n;
    avg /= n;

    for (int i = n - 1; i >= 0; i--) {
        if (rem <= 0)
            ans += abs(a[i] - avg);
        else
            ans += abs(avg - a[i] + 1), --rem;
    }

    cout << ans / 2;
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