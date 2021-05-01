#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)


void solve()
{
	//read the question properly

	int n, d, h;
	cin >> n >> d >> h;
	vector<pair<int, int>> s(n);
	for (auto &i : s)
		cin >> i.second >> i.first;
	double ans = 0.0;
	for (int i = 0; i < n; i++) {
		double x = (double)((s[i].first * d) - (h * s[i].second)) / (d - s[i].second);
		ans = max(ans, x);
	}

	cout << fixed << setprecision(15) << ans;
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