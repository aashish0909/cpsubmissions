#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    char a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    char ans[n];
    ans[0] = '1';
    for (int i = 1; i < n; i++) {
        if ((ans[i - 1] - '0' + a[i - 1] - '0') == (a[i] - '0' + 1))
            ans[i] = '0';
        else ans[i] = '1';
    }

    for (int i = 0; i < n; i++) cout << ans[i];
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