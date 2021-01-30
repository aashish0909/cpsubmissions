#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n, s, d;
    cin >> n >> s >> d;
    int time[n], damage[n];
    for (int i = 0; i < n; i++) cin >> time[i] >> damage[i];

    bool f = false;
    for (int i = 0; i < n; i++) {
        if (time[i] < s && damage[i] > d)
            f = true;
    }

    if (f) cout << "Yes";
    else cout << "No";
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