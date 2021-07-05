#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    //read the question properly

    int n;
    cin >> n;

    int st = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10;
    int d = 10;
    // cout << st << endl;
    int cnt = 0;
    while (st > 1) {
        while (n >= st)
            n -= st, ++cnt;
        st /= d;
        --d;
    }

    cout << cnt + n << endl;

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