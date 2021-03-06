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
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    int sum = a[n - 1] * a[n - 1] * (n - 1);
    vector<int> suff(n);
    suff[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suff[i] = suff[i + 1] + a[i];

    for (int i = 0; i < n - 1; i++) {
        sum += ((n - 1) * (a[i] * a[i]));
        sum -= (2 * (a[i] * suff[i + 1]));
        // cout << suff[i + 1] << " ";
    }

    cout << sum;

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