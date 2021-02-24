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

	string s;
	cin >> s;
	string t;
	cin >> t;
	bool f = false;
	int n = s.length();
	int m = t.length();
	int pos = -1;
	for (int i = n; i >= m; i--) {
		int j = i - m, st = 0;
		while (j < i && st < m && (s[j] == t[st] || s[j] == '?'))
			++j, ++st;
		// cout << st << endl;
		if (st == m) {
			f = true;
			pos = i - m;
			break;
		}
	}

	if (f) {
		int st = 0;
		for (int i = pos; i < pos + m; i++)
			s[i] = t[st++];
		for (auto i : s)
			if (i == '?')
				cout << 'a';
			else cout << i;

		return;
	}
	else
		cout << "UNRESTORABLE";
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