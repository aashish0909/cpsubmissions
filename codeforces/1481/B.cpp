#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int i, ans = -1;
    bool inc = false;
    for (i = 0; i < n - 1; i++) {
        inc = false;
        if (a[i] < a[i + 1]) {
            int diff = min(1ll, k);
            a[i] += diff;
            k -= diff;

            if (k == 0) {
                ans = i + 1;

                break;
            }

            i = -1;
            inc = true;
        }
        if (i == n - 2 && !inc) break;
        if (k == 0)
            break;
    }
    //for (int i = 0; i < n; i++) cout << a[i] << " "; cout << endl;

    cout << ans << endl;
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