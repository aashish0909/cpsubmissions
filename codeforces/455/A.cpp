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
		cin >> i, cnt[i]++;
	int m = *max_element(a.begin(), a.end());
	// cerr << m;
	int dp[m + 1];
	dp[0] = 0;
	dp[1] = cnt[1];
	for (int i = 2; i <= m; i++)
		dp[i] = max(dp[i - 1], dp[i - 2] + cnt[i] * i);

	cout << dp[m] << endl;
}

int32_t main()
{
	aashish_999;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int testcases = 1;
	// cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}