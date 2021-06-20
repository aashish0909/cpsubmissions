#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n, k, x;
	cin >> n >> k >> x;
	vector<int> a(n);
	for (auto &i : a) cin >> i;
	sort(a.begin(), a.end());
	vector<pair<int, int>> in;
	int st = 0;
	for (int i = 0; i < n; i++) {
		int start = st;
		while (i < n - 1 && a[i + 1] - a[i] <= x)
			++i;
		int end = i;
		st = i + 1;
		in.push_back({start, end});
	}
	// cout << "INTERVALS" << endl;
	// for (auto [k, v] : in) cout << k << ' ' << v << endl;
	vector<int> l;
	for (int i = 1; i < in.size(); i++) {
		int diff = (a[in[i].first] - a[in[i - 1].second] - 1) / x;
		// cout << a[in[i].first] << ' ' << a[in[i - 1].second] << endl;
		l.push_back(diff);
	}

	sort(l.begin(), l.end());
	// for (auto i : l) cout << i << ' ';
	// cout << endl;
	int ans = in.size();
	for (auto i : l) {
		if (i <= k) {
			// cout << i << ' ';
			k -= i, --ans;
		}
		else break;
	}
	// cout << endl;

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