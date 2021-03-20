#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    //read the question properly

    int a, b;
    cin >> a >> b;
    int c, d;
    cin >> c >> d;

    int ans = b - c;
    for (int i = a; i <= b; i++) {
        for (int j = c; j <= d; j++)
            ans = max(i - j, ans);
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