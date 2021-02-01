#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int cnt = 0;
    bool visited[n];
    memset(visited, 0, sizeof visited);
    for (int i = 0; i < n; i++) {
        int pre = a[i];
        int j = i;
        if (!visited[i]) {
            visited[i] = 1;
            while (j < n) {
                if (a[j] > pre && visited[j] == 0) {
                    pre = a[j];
                    visited[j] = 1;
                }
                ++j;
            }
            ++cnt;
        }
    }

    cout << cnt << endl;
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