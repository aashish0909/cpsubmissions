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

    int a, b, n;
    cin >> a >> b >> n;
    vector<pair<int, int>> ph(n);
    for (int i = 0; i < n; i++) cin >> ph[i].first;
    for (int i = 0; i < n; i++) cin >> ph[i].second;
    sort(ph.begin(), ph.end());
    int st = 0;
    bool dead[n];
    for (int i = 0; i < n; i++) dead[i] = false;
    for (int i = 0; i < n; i++) {
        int monsters = ceil((double)ph[i].second / a);
        int hero = ceil((double)b / ph[i].first);
        // cerr << op << "#i ";
        int monster = min(monsters, hero);
        ph[i].second -= (monster * a);
        b -= (monster * ph[i].first);

        if (ph[i].second < 1)
            dead[i] = true;
        if (b < 1)
            break;
    }
    // cerr << endl;
    bool flag = true;
    for (int i = 0; i < n; i++)
        if (!dead[i])
            flag = false;

    cout << (flag ? "YES" : "NO") << endl;
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