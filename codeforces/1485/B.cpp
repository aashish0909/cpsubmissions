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
	int n, q, k;
	cin >> n >> q >> k;
	vector<int> a(n + 2);
	for (int i = 1; i <= n; i++) cin >> a[i];

	a[n + 1] = k;

	vector<int> prefix(n + 1);

	for (int i = 1; i <= n; i++) {
		prefix[i] = a[i] - a[i - 1] - 1 + a[i + 1] - a[i] - 1 + prefix[i - 1];

	}

	// for (auto i : prefix) cout << i << " ";
	// cout << endl;
	while (q--) {
		int l, r;
		cin >> l >> r;
		int total = prefix[r - 1] - prefix[l];
		total += a[l + 1] - 1;
		total += k - a[r - 1];

		cout << total - 2 << endl;
	}
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