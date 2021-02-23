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
	set<int> b;
	for (auto &i : a) {
		cin >> i;
		b.insert(i);
	}

	vector<int> ans;

	for (int i = n - 1; i >= 0; i--) {
		if (b.empty())
			break;
		auto it = b.rbegin();
		// cout << "#" << *it << endl;
		int r = i;
		while (r >= 0 && a[r] != *it) {
			auto t = b.find(a[r]);
			b.erase(t);
			--r;
		}

		b.erase(*it);

		ans.push_back(r);
		i = r;
	}
	int last = n;
	for (auto i : ans) {
		for (int j = i; j < last; j++)
			cout << a[j] << " ";
		last = i;
	}

	cout << endl;
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