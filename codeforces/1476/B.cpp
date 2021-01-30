#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int sum = 0;
    int prefix[n];
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
        prefix[i] = a[i] + prefix[i - 1];

    for (int i = n - 1; i >= 1; i--) {
        int diff = (prefix[i - 1] * k) - (a[i] * 100);
        int per = ceil((double)abs(diff) / k);
        if (diff >= 0)
            continue;
        else {
            sum += per;
            a[0] += per;
            prefix[0] = a[0];
            for (int j = 1; j <= i; j++)
                prefix[j] = a[j] + prefix[j - 1];
        }
    }

    cout << sum << endl;
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