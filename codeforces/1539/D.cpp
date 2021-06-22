#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

bool mystyle(const pair<int, int> &a, const pair<int, int> &b) {
	return a.second < b.second;
}

void solve()
{
	//read the question properly

	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	for (auto &[k, v] : a) cin >> k >> v;
	sort(a.begin(), a.end(), mystyle);
	int ans = 0, curr = 0;
	int i = 0, j = n - 1;
	while (i <= j) {
		while (i <= j && curr < a[i].second) {
			int temp = min(a[j].first, a[i].second - curr);
			curr += temp;
			ans += 2 * temp;
			a[j].first -= temp;
			if (!a[j].first)
				--j;
		}

		curr += a[i].first;
		ans += a[i].first;
		++i;
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