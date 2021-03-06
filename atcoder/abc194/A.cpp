#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    //read the question properly

    int a, b;
    cin >> a >> b;

    if (a + b >= 15 && b >= 8)
        cout << 1;
    else if (a + b >= 10 && b >= 3)
        cout << 2;
    else if (a + b >= 3)
        cout << 3;
    else cout << 4;
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