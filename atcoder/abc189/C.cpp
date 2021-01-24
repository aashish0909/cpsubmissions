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
    for (int i = 0; i < n; i++) cin >> a[i];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int mn = a[i];
        int j;
        for (j = i; j < n; j++) {
            mn = min(mn, a[j]);
            sum = max(sum, mn * (j - i + 1));
        }
    }
    cout << sum << endl;
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