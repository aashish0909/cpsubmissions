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
    int n;
    cin >> n;
    int p[n], c[n];
    for (int i = 0; i < n; i++) cin >> p[i] >> c[i];

    bool f = true;
    if (p[0] < c[0]) f = false;
    for (int i = 1; i < n; i++) {

        if (p[i] < p[i - 1])
            f = false;
        if (c[i] < c[i - 1])
            f = false;
        if (p[i] - p[i - 1] < c[i] - c[i - 1])
            f = false;
    }

    cout << (f ? "YES" : "NO") << endl;

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