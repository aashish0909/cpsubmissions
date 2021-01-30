#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c == 0) {
        if (b >= a)
            cout << "Aoki";
        else cout << "Takahashi";
    }
    else {
        if (a >= b) cout << "Takahashi";
        else cout << "Aoki";
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