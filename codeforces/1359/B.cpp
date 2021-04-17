#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	char a[n][m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	int cost = 0;
	for (int i = 0; i < n; i++) {
		int cnt1 = 0, cnt2 = 0;
		for (int j = 0; j < m; j++) {
			if (a[i][j] == '.') {
				if (j < m - 1) {
					if (a[i][j + 1] == '.') {
						++cnt2, ++j;
						continue;
					}
				}
				++cnt1;
			}
		}
		// cout << cnt1 << " " << cnt2 << endl;
		if (2 * x <= y)
			cost = cost + (cnt1 + (2 * cnt2)) * x;
		else cost = cost + cnt1 * x + cnt2 * y;
	}

	cout << cost << endl;
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