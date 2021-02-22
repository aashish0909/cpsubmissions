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

	int n, x, m;
	cin >> n >> x >> m;
	int cnt = 1;
	int mx = x, mn = x;
	while (m--) {
		int l, r;
		cin >> l >> r;
		if (l <= mn && r >= mn)
			mn = l;
		if (l <= mx && r >= mx)
			mx = r;
	}

	cout << mx - mn + 1 << endl;
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