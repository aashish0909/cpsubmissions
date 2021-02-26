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

	int n, k;
	cin >> n >> k;
	string s, t;
	cin >> s >> t;
	int posf[k + 1], posb[k + 1];
	int it = 0;
	for (int i = 0; i < n; i++) {
		if (it < n && s[i] == t[it])
			posf[it] = i, ++it;
	}
	it = k - 1;
	for (int i = n - 1; i >= 0; i--) {
		if (it >= 0 && s[i] == t[it])
			posb[it] = i, --it;
	}

	int mx = -1e9;
	for (int i = 1; i < k; i++) {
		mx = max(mx, posb[i] - posf[i - 1]);
	}

	cout << mx;
}

int32_t main()
{
	aashish_999;

	int testcases = 1;
	// cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}