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
	if (n == 1) {
		cout << a[0] << endl;
		return;
	}
	int cost = a[0] + a[n - 1];
	for (int i = 1; i < n; i++)
		cost += abs(a[i] - a[i - 1]);

	cost -= max(0ll, a[0] - a[1]);

	cost -= max(0ll, a[n - 1] - a[n - 2]);


	for (int i = 1; i < n - 1; i++) {
		cost -= max(0ll, a[i] - max(a[i - 1], a[i + 1]));
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