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

	int n, avail;
	cin >> n >> avail;
	string s;
	cin >> s;
	set<char> pre;
	while (avail--) {
		char x;
		cin >> x;
		pre.insert(x);
	}

	int len = 0;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (pre.find(s[i]) == pre.end()) {
			ans += len * (len + 1) / 2;
			len = 0;
			continue;
		}
		++len;
	}

	ans += len * (len + 1) / 2;

	cout << ans;
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