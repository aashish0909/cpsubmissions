#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int x, y;
    cin >> x >> y;
    if (min(x, y) + 3 > max(x, y))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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