#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

bool mystyle(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}

void solve()
{
    //read the question properly

    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());
    vector<int> ans(n);
    int each = k / n;
    for (int i = 0; i < n; i++) {
        ans[i] = each;
    }
    int remain = k - each * n;
    if (remain != 0) {
        for (int i = 0; i < n && remain > 0; i++) {
            ans[a[i].second]++;
            --remain;
        }
    }

    for (auto i : ans)
        cout << i << endl;
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