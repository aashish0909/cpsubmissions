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
		cnt[a[i] - i - 1]++;
	}

	for (int i = n - 1; i >= 0; i--) {
		cnt[a[i] - i - 1]--;
		ans += max(0ll, cnt[a[i] - i - 1]);
	}
	cout << ans << endl;
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