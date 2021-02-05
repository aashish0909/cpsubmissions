#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
    int x, y; cin >> x >> y;
    string s;
    cin >> s;
    int a = 0, b = 0;
    map<char, int> cnt;
    for (auto i : s) {
        cnt[i]++;
        if (i == 'L') --a;
        if (i == 'U') ++b;
        if (i == 'R') ++a;
        if (i == 'D') --b;
    }
    bool f = true;

    while (a != x) {
        if (a > x) {
            if (cnt['R'] > 0)
                --cnt['R'], --a;
            else {
                f = false;
                break;
            }
        }
        else {
            if (cnt['L'] > 0)
                --cnt['L'], ++a;
            else {
                f = false;
                break;
            }
        }
    }

    while (b != y) {
        if (b > y) {
            if (cnt['U'] > 0)
                --cnt['U'], --b;
            else {
                f = false;
                break;
            }
        }
        else {
            if (cnt['D'] > 0)
                --cnt['D'], ++b;
            else {
                f = false;
                break;
            }
        }
    }

    if (a != x || b != y)
        f = false;

    cout << (f ? "YES" : "NO") << endl;
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