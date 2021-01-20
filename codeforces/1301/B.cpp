#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    set<int> s;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (i + 1 < n && a[i] == -1 && a[i + 1] != -1) s.insert(a[i + 1]);
        if (i > 0 && a[i] == -1 && a[i - 1] != -1) s.insert(a[i - 1]);
    }
    if (s.size() == 0)
        cout << 0 << " " << 0 << endl;
    else if (s.size() == 1) {

        int diff = 0;
        int avg = *s.rbegin();
        for (int i = 1; i < n; i++) {
            int t = a[i], q = a[i - 1];
            if (t == -1) t = avg;
            if (q == -1) q = avg;
            diff = max(diff, abs(t - q));
        }
        cout << diff << " " << avg << endl;
    }
    else {
        auto st = s.begin();
        auto end = s.rbegin();
        int avg = (*st + *end) / 2;
        int diff = 0;
        for (int i = 1; i < n; i++) {
            int t = a[i], q = a[i - 1];
            if (t == -1) t = avg;
            if (q == -1) q = avg;
            diff = max(diff, abs(t - q));
        }

        cout << diff << " " << avg << endl;
    }

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