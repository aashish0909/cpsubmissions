#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int sum = a[0];
    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] * 100 <= k * sum)
            sum += a[i];
        else {
            int req = ceil((double)((a[i] * 100) - (k * sum)) / k);
            ans += req;
            sum += a[i] + req;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    aashish_999;

    int testcases = 1;
    cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}