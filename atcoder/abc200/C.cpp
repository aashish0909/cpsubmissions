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
	for (auto &i : a) cin >> i;
	map<int, int> cnt;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int mod = a[i] % 200;
		ans += cnt[mod];
		cnt[mod]++;
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