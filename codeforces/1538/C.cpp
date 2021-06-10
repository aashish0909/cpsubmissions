#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n, l, r;
	cin >> n >> l >> r;
	vector<int> a(n);
	for (auto &i : a) cin >> i;
	sort(a.begin(), a.end());

	int cnt = 0;

	int i = 0;
	int low = n - 1, high = n - 1;
	while (i < high) {
		low = max(low, i);
		while (low > i && a[i] + a[low] >= l)
			--low;
		while (high > low && a[i] + a[high] > r)
			--high;
		cnt += high - low;
		// cout << low << " " << high << endl;
		++i;
	}

	cout << cnt << endl;
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