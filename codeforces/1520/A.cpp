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
	string s;
	cin >> s;

	set<char> dis;
	for (int i = 0; i < n; i++) {
		if (dis.find(s[i]) != dis.end()) {
			cout << "NO" << endl;
			return;
		}
		dis.insert(s[i]);
		while (i + 1 < n && s[i + 1] == s[i])
			++i;
	}

	cout << "YES" << endl;
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