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

    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (auto &i : a) cin >> i.first;
    for (auto &i : a) cin >> i.second;

    vector<int> t1, t2;
    bool f = true;

    for (auto i : a) {
        if (i.second == 1)
            t1.push_back(i.first);
        else
            t2.push_back(i.first);
    }

    if (t2.size() == 0)
        for (int i = 1; i < t1.size(); i++)
            if (t1[i - 1] > t1[i])
                f = false;
    if (t1.size() == 0)
        for (int i = 1; i < t2.size(); i++)
            if (t2[i - 1] > t2[i])
                f = false;

    cout << (f ? "Yes" : "No") << endl;

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