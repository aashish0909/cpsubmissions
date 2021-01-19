#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<int> prime;

void sieve() {
    bool flag[100006];
    memset(flag, true, sizeof(flag));
    for (int i = 2; i * i <= 100005; i++) {
        if (flag[i] == true) {
            for (int j = i * i; j <= 100005; j += i)
                flag[j] = false;
        }
    }

    for (int p = 2; p <= 100005; p++)
        if (flag[p]) prime.push_back(p);
}

void solve()
{
    int d;
    cin >> d;
    int d1 = 1;
    int d2 = *lower_bound(prime.begin(), prime.end(), 1 + d);
    int d3 = *lower_bound(prime.begin(), prime.end(), d2 + d);
    cout << d2*d3 << endl;
}

int32_t main()
{
    aashish_999;
    sieve();
    int testcases = 1;
    cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}