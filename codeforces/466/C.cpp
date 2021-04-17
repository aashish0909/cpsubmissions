#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> sum(n + 1);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum[i + 1] = sum[i] + a[i];
	}
	if (sum[n] % 3 != 0) {
		cout << 0;
		return;
	}
	int cnt = 0;
	int ans = 0;
	for (int i = 1; i < n; i++) {
		if (sum[i] == 2 * sum[n] / 3)
			ans += cnt;
		if (sum[i] == sum[n] / 3)
			++cnt;
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