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
    string a;
    cin >> a;

    char c1 = 'a', c2 = 'z';
    bool f = 1;
    for (int i = 0; i < a.length(); i++) {
        if (f)
            a[i] = (a[i] == c1 ? 'b' : 'a'), f = !f;
        else
            a[i] = (a[i] == c2 ? 'y' : 'z'), f = !f;
    }

    cout << a << endl;
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