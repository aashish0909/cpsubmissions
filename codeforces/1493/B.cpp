#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)
set<int> valid;
map<int, int> re;
bool check(int ch, int cm, int h, int m) {
    if (valid.find(ch / 10) == valid.end()) return false;
    if (valid.find(ch % 10) == valid.end()) return false;
    if (valid.find(cm / 10) == valid.end()) return false;
    if (valid.find(cm % 10) == valid.end()) return false;
    int mo = re[ch / 10], mt = re[ch % 10], ho = re[cm / 10], ht = re[cm % 10];

    return ((10 * ht + ho) < h && (10 * mt + mo) < m);
}

void solve()
{
    //read the question properly

    int h, m;
    cin >> h >> m;
    int ch, cm;
    char s;
    cin >> ch >> s >> cm;
    // cout << ch << " " << cm << endl;
    while (!check(ch, cm, h, m)) {
        ++cm;
        if (cm >= m) {
            cm = 0, ++ch;
            if (ch >= h)
                ch = 0;
        }
        // cout << "###" << ch / 10 << ch % 10 << ":" << cm / 10 << cm % 10 << endl;
    }
    cout << ch / 10 << ch % 10 << ":" << cm / 10 << cm % 10 << endl;
}

int32_t main()
{
    aashish_999;
    valid.insert(0);
    valid.insert(1);
    valid.insert(2);
    valid.insert(5);
    valid.insert(8);
    re[1] = 1;
    re[0] = 0;
    re[2] = 5;
    re[5] = 2;
    re[8] = 8;
    int testcases = 1;
    cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}