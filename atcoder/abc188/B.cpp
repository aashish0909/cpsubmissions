#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int sum = 0;
    for (int i = 0; i < n; i++) sum += (a[i] * b[i]);
    if (sum == 0)
        cout << "Yes";
    else
        cout << "No";
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