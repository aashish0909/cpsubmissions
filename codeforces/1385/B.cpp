#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> pos(n);
    for (int i = 0; i < 2 * n; i++) {
        int x;
        cin >> x;
        pos[x - 1] = {i, x};
    }

    sort(pos.begin(), pos.end());
    for (auto x : pos)
        cout << x.second << " ";
    cout << endl;
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