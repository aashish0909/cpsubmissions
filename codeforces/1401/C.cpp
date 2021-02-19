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
	int mn = 1e18;
	for (auto &i : a) {
		cin >> i;
		mn = min(mn, i);
	}

	vector<int> b = a;
	sort(b.begin(), b.end());
	bool f = true;

	for (int i = 0; i < n; i++)
		if (a[i] != b[i]) {
			if (a[i] % mn != 0)
				f = false;
		}

	cout << (f ? "YES" : "NO") << endl;
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