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
	map<int, int> cnt;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		cnt[x]++;
		cnt[y]++;
	}

	int ans = 0;
	for (int i = 1; i <= n; i++)
		if (!cnt[i])
			ans = i;
	cout << n - 1 << endl;
	for (int i = 1; i <= n; i++) {
		if (i == ans)
			continue;
		cout << i << " " << ans << endl;
	}
}

int32_t main()
{
	aashish_999;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int testcases = 1;
	// cin >> testcaxses;
	while (testcases--)
	{
		solve();
	}
}