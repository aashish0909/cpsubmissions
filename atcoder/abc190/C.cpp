#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int n, m;
	cin >> n >> m;
	vector<int> a(m), b(m);
	for (int i = 0; i < m; i++)
		cin >> a[i] >> b[i];
	int k;
	cin >> k;
	vector<int> c(k), d(k);
	for (int i = 0; i < k; i++)
		cin >> c[i] >> d[i];

	int ans = 0;
	// cout << (1 << k) << endl;
	for (int mask = 0; mask < (1 << k); mask++) {
		map<int, int> selected;
		for (int i = 0; i < k; i++) {
			if ((mask & (1 << i)) == 0)
				selected[c[i]] = 1;
			else selected[d[i]] = 1;
		}

		int cnt = 0;
		for (int i = 0; i < m; i++) {
			if (selected[a[i]] && selected[b[i]])
				++cnt;
		}
		ans = max(ans, cnt);
	}

	cout << ans << endl;
}

int32_t main()
{
	aashish_999;

	int testcases = 1;
	// cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}