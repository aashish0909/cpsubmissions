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
    int sum = 0;
    vector<int> ans;
    int digit = 9;
    while (sum < n && digit > 0) {
        ans.push_back(min(n - sum, digit));
        sum += min(n - sum, digit);
        --digit;
    }

    if (sum != n) {
        cout << -1 << endl;
        return;
    }

    reverse(ans.begin(), ans.end());
    for (auto i : ans)
        cout << i;
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