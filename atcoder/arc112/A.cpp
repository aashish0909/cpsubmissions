#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    // Understand the problem.
    // Devise a plan.
    // Carry out the plan.
    // Look back.

    int l, r;
    cin >> l >> r;

    int cnt = 0;

    int diff = max(0ll, r - (2 * l) + 1);
    cnt += diff * (diff + 1) / 2;

    /*
    2 2 2 3 2 4
    3 3

    */



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