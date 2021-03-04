#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    //read the question properly
    string s;
    cin >> s;
    bool f = true;
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0 && isupper(s[i]))
            f = false;
        if (i % 2 && islower(s[i]))
            f = false;
    }

    cout << (f ? "Yes" : "No") << endl;
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