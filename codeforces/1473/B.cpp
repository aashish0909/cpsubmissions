#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    string a, b;
    cin >> a >> b;

    int n = a.length(), m = b.length();

    string s1 = "", s2 = "";

    for (int i = 1; i <= m; i++)
        s1 += a;
    for (int i = 1; i <= n; i++)
        s2 += b;
    bool f = true;
    for (int i = 0; i < n * m; i++)
        if (s1[i] != s2[i])
            f = false;

    if (!f) {
        cout << -1 << endl;
        return;
    }
    string ans = "";
    int len = (n * m) / __gcd(n, m);
    for (int i = 0; i < len; i++)
        ans += s1[i];

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