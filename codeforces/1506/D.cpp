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
	map<int, int> cnt;
	for (auto &i : a)
		cin >> i, ++cnt[i];
	int mx = 0;
	for (auto i : a)
		mx = max(mx, cnt[i]);
	int ans;
	if (n % 2 == 1)
		ans = max(mx * 2 - n, 1ll);
	else
		ans = max(0ll, mx * 2 - n);
	cout << ans << endl;
}

int32_t main()
{
	aashish_999;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int testcases = 1;
	cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}