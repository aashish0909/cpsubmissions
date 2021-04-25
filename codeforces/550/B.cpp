#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n, l, r, x;
	cin >> n >> l >> r >> x;
	int cnt = 0;
	vector<int> a(n);
	set<vector<int>> ways;
	for (auto &i : a) cin >> i;
	for (int mask = 0; mask < (1 << n); mask++) {
		vector<int> chosen;
		for (int i = 0; i < n; i++) {
			int t = (1 << i);
			if ((t & mask) != 0)
				chosen.push_back(a[i]);
		}

		if (chosen.size() < 2)
			continue;
		sort(chosen.begin(), chosen.end());
		if ((chosen[chosen.size() - 1] - chosen[0] >= x)) {
			int sum = 0;
			for (auto it : chosen) sum += it;
			if (sum >= l && sum <= r)
				++cnt;
		}
	}

	// for (auto i : ways) {
	// 	for (auto j : i)
	// 		cout << j << " ";
	// 	cout << endl;
	// }
	cout << cnt;
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