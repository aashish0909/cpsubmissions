#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)
set<char> valid;

int conv(string ch) {
    int nh = 0;
    for (auto i : ch)
        nh = nh * 10 + (i - '0');
    return nh;
}

bool check(string h, string m, string th, string tm) {
    for (auto i : h)
        if (valid.find(i) == valid.end())
            return false;
    for (auto i : m)
        if (valid.find(i) == valid.end())
            return false;
    for (int i = 0; i < 2; i++)
        if (h[i] == '2')
            h[i] = '5';
        else if (h[i] == '5')
            h[i] = '2';
    for (int i = 0; i < 2; i++)
        if (m[i] == '2')
            m[i] = '5';
        else if (m[i] == '5')
            m[i] = '2';

    reverse(h.begin(), h.end());
    reverse(m.begin(), m.end());
    // cout << m << " " << tm << ":" << th << " " << h << ":::" << endl;
    if (m > th || h > tm)
        return false;
    return true;
}

void solve()
{
    //read the question properly

    string h, m;
    cin >> h >> m;
    int cch = stoi(h), ccm = stoi(m);
    --cch, --ccm;
    h = to_string(cch), m = to_string(ccm);
    string ch, cm;
    char s;
    for (int i = 0; i < 2; i++) {
        char x;
        cin >> x;
        ch.push_back(x);
    }
    cin >> s;
    for (int i = 0; i < 2; i++) {
        char x;
        cin >> x;
        cm.push_back(x);
    }
    int nh = 0, nm = 0;
    if (h.size() == 1) {
        string temp = h;
        h = '0';
        h += temp;
    }
    if (m.size() == 1) {
        string temp = m;
        m = '0';
        m += temp;
    }
    for (auto i : h)
        nh = nh * 10 + (i - '0');
    for (auto i : m)
        nm = nm * 10 + (i - '0');
    // cout << nh << " " << nm << endl;

    while (check(ch, cm, h, m) == 0) {
        int ph = conv(ch);
        int pm = conv(cm);
        ++pm;
        if (pm == nm + 1)
            pm = 0, ++ph;
        if (ph == nh + 1)
            ph = 0;
        ch = "";
        cm = "";
        if (ph < 10)
            ch += '0';
        ch += to_string(ph);
        if (pm < 10)
            cm += '0';
        cm += to_string(pm);
        // cout << ch << "::" << cm << endl;
    }

    cout << ch << ":" << cm << endl;

}

int32_t main()
{
    aashish_999;
    valid.insert('0');
    valid.insert('1');
    valid.insert('2');
    valid.insert('5');
    valid.insert('8');
    int testcases = 1;
    cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}