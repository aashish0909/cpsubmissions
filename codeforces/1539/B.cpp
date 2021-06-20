#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	vector<int> l(n + 1);
	vector<int> posn(26, -1);
	for (int i = 0; i < n; i++) {
		if (posn[s[i] - 'a'] == -1) {
			posn[s[i] - 'a'] = (s[i] - 'a' + 1);
		}
	}

	for (int i = 0; i < n; i++) {
		l[i + 1] = l[i] + posn[s[i] - 'a'];
	}
	// for (int i = 1; i <= n; i++) cout << l[i] << ' ';
	// cout << endl;
	while (q--) {
		int left, right;
		cin >> left >> right;
		cout << l[right] - l[left - 1] << endl;
	}
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