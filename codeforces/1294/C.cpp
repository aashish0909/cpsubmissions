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

    for (int i = 2; i * i * i <= n; i++) {
        for (int j = i + 1; j * j < n / i; j++)
            if (n / (i * j) > 1 && (n % (i * j) == 0)) {
                cout << "YES" << endl;
                cout << i << " " << j << " " << n / (i * j) << endl;
                return;
            }
    }

    cout << "NO" << endl;
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