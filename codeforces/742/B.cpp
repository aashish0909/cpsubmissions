#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	map<int, int> d;
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (auto &i : a) {
		cin >> i;
		d[i]++;
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if ((a[i]^x) == a[i])
			cnt += d[a[i]] - 1;
		else {
			cnt += d[a[i] ^ x];
		}
	}

	cout << cnt / 2 << endl;
}

int32_t main()
{
	aashish_999;

	int testcases = 1;
	// cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}