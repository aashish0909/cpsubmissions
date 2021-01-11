#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a[n1], b[n2], c[n3];
    int s1 = 0, s2 = 0, s3 = 0;
    for (int i = 0; i < n1; i++) cin >> a[i], s1 += a[i];
    for (int i = 0; i < n2; i++) cin >> b[i], s2 += b[i];
    for (int i = 0; i < n3; i++) cin >> c[i], s3 += c[i];
    int m1 = *min_element(a, a + n1);
    int m2 = *min_element(b, b + n2);
    int m3 = *min_element(c, c + n3);
    int sum = s1 + s2 + s3;
    int mn = min({m1 + m2, m2 + m3, m1 + m3});
    int ans = sum - 2 * min(mn, min({s1, s2, s3}));
    cout << ans << endl;
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