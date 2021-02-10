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
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans[n];
    int st = 0;
    for (int i = 0; i < (n + 1) / 2; i++)
        ans[st] = a[i], st += 2;
    st = 1;
    for (int i = n - 1; i >= (n + 1) / 2; i--)
        ans[st] = a[i], st += 2;

    for (int i = 0; i < n; i++) cout << ans[i] << " ";
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