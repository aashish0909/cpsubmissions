#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n, m;
	cin >> n >> m;
	string s, t;
	cin >> s >> t;
	int mx = n;
	vector<int> ans;
	for (int i = 0; i < n; i++) ans.push_back(i);
	for (int i = 0; i <= m - n; i++) {
		int cnt = 0;
		vector<int> d;
		int pos = 0;
		for (int j = i; j < i + n; j++) {
			if (t[j] != s[pos])
				d.push_back(pos), ++cnt;
			++pos;
		}

		if (cnt < mx) {
			ans = d;
			mx = cnt;
		}
	}


	cout << mx << endl;
	for (auto i : ans) cout << i + 1 << " ";
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