#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<pair<int, int>> matchlaga(vector<pair<int, int>> &a) {
    vector<pair<int, int>> b;
    for (int i = 0; i < a.size(); i += 2)
        if (a[i].first > a[i + 1].first)
            b.push_back({a[i].first, a[i].second});
        else
            b.push_back({a[i + 1].first, a[i + 1].second});
    return b;
}

void solve()
{
    int x;
    cin >> x;
    int n = pow(2, x);
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
        int y;
        cin >> y;
        a.push_back({y, i + 1});
    }
    while (a.size() > 2) {
        a = matchlaga(a);

    }

    sort(a.begin(), a.end());
    cout << a[0].second;
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