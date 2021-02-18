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
    vector<int> a(n);
    for (auto &i : a) cin >> i;

    vector<int> pre1(n + 1, 0), pre2(n + 1, 0);
    pre1[1] = a[0];
    for (int i = 1; i < n; i++) pre1[i + 1] = pre1[i] + a[i];
    sort(a.begin(), a.end());
    pre2[1] = a[0];
    for (int i = 1; i < n; i++)
        pre2[i + 1] = pre2[i] + a[i];
    int queries;
    cin >> queries;
    while (queries--)
    {   
        int o, l, r;
        cin >> o >> l >> r;

        if (o == 1)
            cout << pre1[r] - pre1[l - 1] << endl;
        else cout << pre2[r] - pre2[l - 1] << endl;
    }
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