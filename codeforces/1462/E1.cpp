#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    // Understand the problem.
    // Devise a plan.
    // Carry out the plan.
    // Look back.
    int n;
    cin >> n;
    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += cnt[i] * cnt[i + 1] * cnt[i + 2];
        ans += cnt[i] * cnt[i + 1] * (cnt[i + 1] - 1) / 2;
        ans += cnt[i] * (cnt[i] - 1) * cnt[i + 1] / 2;
        ans += cnt[i] * cnt[i + 2] * (cnt[i + 2] - 1) / 2;
        ans += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) / 6;
        ans += cnt[i] * (cnt[i] - 1) * cnt[i + 2] / 2;
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