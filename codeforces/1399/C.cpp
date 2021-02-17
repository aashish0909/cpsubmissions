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
	vector<int> a(n);
	map<int, int> f;
	int total = 0;
	for (auto &i : a) cin >> i, f[i]++, total += i;

	int ans = 0;

	for (int s = 1; s <= 2 * n; s++) {
		int cnt = 0;
		for (int i = 1; i < (s + 1) / 2; i++) {
			cnt += min(f[i], f[s - i]);
		}
		if (s % 2 == 0)
			cnt += f[s / 2] / 2;
		ans = max(ans, cnt);
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