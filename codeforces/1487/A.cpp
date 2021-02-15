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

	int cnt = 0;
	sort(a.begin(), a.end());

	if (a[0] == a[n - 1]) {
		cout << 0 << endl;
		return;
	}

	for (int i = n - 1; i > 0; i--) {
		if (a[i] > a[0]) ++cnt;
	}

	cout << cnt << endl;
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