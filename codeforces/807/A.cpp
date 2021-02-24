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
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++)
		cin >> a[i] >> b[i];
	bool sorted = 1, changed = 0;
	for (int i = 0; i < n; i++) {
		if (i > 0 && a[i] > a[i - 1])
			sorted = 0;
		if (b[i] != a[i])
			changed = 1;
	}

	if (!changed && !sorted)
		cout << "unrated";
	else if (changed)
		cout << "rated";
	else
		cout << "maybe";
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