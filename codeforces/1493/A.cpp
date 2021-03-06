#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    //read the question properly

    int n, k;
    cin >> n >> k;
    bool a[n + 1];
    memset(a, true, sizeof(a));
    a[k] = false;
    for (int i = 1; i < (k + 1) / 2; i++) {
        a[i] = false;
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++)
        if (a[i])
            ans.push_back(i);
    cout << ans.size() << endl;
    for (auto i : ans)
        cout << i << " ";
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