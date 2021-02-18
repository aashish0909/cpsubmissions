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
    vector<int> dig;
    while (n > 0) {
        dig.push_back(n % 10);
        n /= 10;
    }

    for (int i = 0; i < dig.size() - 1; i++)
        if (9 - dig[i] < dig[i])
            dig[i] = 9 - dig[i];
    if (9 - dig[dig.size() - 1] < dig[dig.size() - 1] && 9 - dig[dig.size() - 1] != 0)
        dig[dig.size() - 1] = 9 - dig[dig.size() - 1];

    reverse(dig.begin(), dig.end());
    for (auto i : dig) cout << i;
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