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

	int n;
	cin >> n;
	int k;
	cin >> k;
	vector<int> a(n);
	for (int &i : a) cin >> i;

	vector<int> prefix(n, 0);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (i > 0 && i < n - 1 && a[i] > a[i - 1] && a[i] > a[i + 1])
			++cnt;
		prefix[i] = cnt;
	}
	int ans = 0, pos = 1;
	for (int i = 0; i + k - 2 < n; i++) {
		int count = prefix[i + k - 2] - prefix[i];
		if (count > ans)
			ans = count, pos = i + 1;
	}

	// for (auto i : prefix) cout << i << " ";
	// cout << endl;

	cout << ans + 1 << " " << pos << endl;
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