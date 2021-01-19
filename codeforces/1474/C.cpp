#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

multiset<int> s;
vector<pair<int, int>> ans;

bool check(int &p, int &q, int a[], int &n) {

    ans.clear();

    s.clear();
    for (int i = 0; i < n; i++) s.insert(a[i]);

    int x = p + q;

    bool f = true;

    while (f && s.size()) {
        auto it = --s.end();
        int val = *it;
        s.erase(it);
        it = s.find(x - val);
        if (it != s.end()) {
            ans.push_back({val, x - val});
            x = max(val, x - val);
            s.erase(it);
        }
        else {
            f = false;
            break;
        }
    }

    return f;
}

void solve()
{
    int k;
    cin >> k;
    int n = 2 * k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i], s.insert(a[i]);
    sort(a, a + n);
    bool f;
    int x;
    for (int i = 0; i < n - 1; i++) {
        f = check(a[i], a[n - 1], a, n);
        x = a[i] + a[n - 1];
        if (f) break;
    }

    if (f) {
        cout << "YES" << endl << x << endl;
        for (auto [key, val] : ans)
            cout << key << " " << val << endl;
    }
    else cout << "NO" << endl;
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