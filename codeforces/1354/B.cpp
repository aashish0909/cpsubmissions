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

    string s;
    cin >> s;

    int n = s.length();
    int ans = n + 1;
    int pos[3];
    for (int i = 0; i < 3; i++) pos[i] = -1;
    for (int i = 0; i < n; i++) {
        pos[s[i] - '0' - 1] = i;
        if (pos[0] != -1 && pos[1] != -1 && pos[2] != -1)
            ans = min(ans, max({pos[0], pos[1], pos[2]}) - min({pos[0], pos[1], pos[2]}) + 1);
    }
    if (ans > n)
        cout << "0" << endl;
    else
        cout << ans << endl;
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