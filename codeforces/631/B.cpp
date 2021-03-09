#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    //read the question properly

    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = 0;
    map<int, pair<int, int>> timer, timec;
    for (int t = 1; t <= k; t++) {
        int type;
        cin >> type;

        if (type == 1) {
            int r, color;
            cin >> r >> color;
            timer[r - 1].first = t;
            timer[r - 1].second = color;
        }
        else {
            int c, color;
            cin >> c >> color;
            timec[c - 1] = {t, color};
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (timer[i].first > timec[j].first)
                a[i][j] = timer[i].second;
            else
                a[i][j] = timec[j].second;
        }
    }

    for (auto i : a) {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }

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