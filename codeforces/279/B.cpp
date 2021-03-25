#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int n, k;
	cin >> n >> k;
	vector<int> a(n), pre;
	pre.push_back(0);
	for (auto &i : a) {
		cin >> i;
		pre.push_back(i + pre.back());
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		int l = i, r = n;
		int x = i;
		while (l <= r) {
			int mid = (l + r) / 2;
			if (pre[mid] - pre[i] <= k)
				x = mid, l = mid + 1;
			else
				r = mid - 1;
		}
		ans = max(ans, x - i);
	}

	cout << ans;

}

int32_t main()
{
	aashish_999;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int testcases = 1;
	//cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}