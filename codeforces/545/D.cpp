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
	for (auto &i : a) cin >> i;
	sort(a.begin(), a.end());
	int cnt = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= cnt)
			cnt += a[i], ++ans;
	}

	cout << ans << endl;
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