#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

bool con(int n, int x) {
    
    while (n > 0) {
        int r = n;
        while (r > 0) {
            if (r % 10 == x)
                return true;
            r /= 10;
        }
        n -= x;
    }
    return false;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
        cout << (con(a[i], x) ? "YES" : "NO") << endl;

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