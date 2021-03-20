#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n, m, q;
	cin >> n >> m >> q;
	vector<int>x(m);
	vector<pair<int, int>> wi(n);
	for (int i = 0; i < n; i++)
		cin >> wi[i].second >> wi[i].first;
	sort(wi.begin(), wi.end());
	for (auto &i : x)
		cin >> i;

	while (q--) {
		int l, r;
		cin >> l >> r;
		multiset<int> a;
		int sum = 0;
		for (int i = 0; i < l - 1; i++)
			a.insert(x[i]);

		for (int i = r; i < m; i++)
			a.insert(x[i]);

		for (int i = n - 1; i >= 0; i--) {
			auto itr = a.lower_bound(wi[i].second);
			if (itr != a.end())
			{
				sum += wi[i].first;
				a.erase(itr);
			}
		}

		cout << sum << endl;

	}
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