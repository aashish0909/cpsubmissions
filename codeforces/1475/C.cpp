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
    int x, y, n;
    cin >> x >> y >> n;
    map<int, int> boys, girls;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        boys[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        girls[b[i]]++;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += (n - boys[a[i]] - girls[b[i]] + 1);
    }

    cout << cnt / 2 << endl;
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