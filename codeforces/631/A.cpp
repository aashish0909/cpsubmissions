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
    vector<int> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int sum1 = a[i];
        int sum2 = b[i];
        for (int j = i; j < n; j++) {
            sum1 = sum1 | a[j];
            sum2 = sum2 | b[j];
            ans = max(ans, sum1 + sum2);
        }
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