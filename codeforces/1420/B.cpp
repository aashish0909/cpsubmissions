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
	for (auto &i : a) {
		cin >> i;
		int k = (int)(log2(i));
		cnt[k]++;
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int k = (int)log2(a[i]);
		if (cnt[k] > 0)
			ans += cnt[k] - 1;
	}

	cout << ans / 2 << endl;

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