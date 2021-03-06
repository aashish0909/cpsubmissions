#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    //read the question properly

    int n;
    cin >> n;
    vector<pair<int, int>> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> b[i].first;
        a[i].second = b[i].second = i;
    }

    int ans = 1e18;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a[0].second == b[0].second) {
        ans = min({a[0].first + b[0].first, max(a[1].first , b[0].first), max(a[0].first , b[1].first)});
    }
    else ans = max(a[0].first , b[0].first);
    cout << ans << endl;
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