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
    string s;
    cin >> s;
    if (s.substr(0, 4) == "2020" || s.substr(n - 1 - 3, n) == "2020" ||
            (s[0] == '2' && s.substr(n - 3, n) == "020") ||
            (s.substr(0, 2) == "20" && s.substr(n - 2, n) == "20") ||
            (s.substr(0, 3) == "202" && s[n - 1] == '0'))
        cout << "YES" << endl;
    else cout << "NO" << endl;
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