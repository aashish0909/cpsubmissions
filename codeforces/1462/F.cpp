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

	vector<int> L, R;

	vector<pair<int, int>> seg;
	int n;
	cin >> n;
	seg.resize(n);
	int ans = n - 1;
	for (auto &[l, r] : seg) {
		cin >> l >> r;
		L.push_back(l);
		R.push_back(r);
	}

	sort(L.begin(), L.end());
	sort(R.begin(), R.end());

	for (auto [l, r] : seg) {
		int left = lower_bound(R.begin(), R.end(), l) - R.begin();
		int right = n - (int)(upper_bound(L.begin(), L.end(), r) - L.begin());

		ans = min(ans, left + right);
	}

	cout << ans << endl;
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