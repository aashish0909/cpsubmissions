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
	vector<int> a(2 * n), b(2 * n);
	for (auto &i : a)
		cin >> i;
	for (int i = 0; i < 2 * n; i++)
		b[i] = i + 1;
	int cnt = 0;
	bool f = false;
	bool sw = true;
	if (a == b) {
		cout << 0;
		return;
	}
	int ans = 1e9;
	for (int i = 1; i <= 2 * n; i++) {
		if (sw) {
			for (int j = 0; j < 2 * n; j += 2)
				swap(b[j], b[j + 1]);
			sw = !sw;
		}
		else {
			for (int j = 0; j < n; j++)
				swap(b[j], b[n + j]);
			sw = !sw;
		}
		if (b == a) {
			ans = min(i, ans);
			f = true;
		}
	}
	sort(b.begin(), b.end());
	sw = false;
	for (int i = 1; i <= 2 * n; i++) {
		if (sw) {
			for (int j = 0; j < 2 * n; j += 2)
				swap(b[j], b[j + 1]);
			sw = !sw;
		}
		else {
			for (int j = 0; j < n; j++)
				swap(b[j], b[n + j]);
			sw = !sw;
		}
		if (b == a) {
			ans = min(i, ans);
			f = true;
		}
	}
	if (f)
		cout << ans;
	else
		cout << -1;
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