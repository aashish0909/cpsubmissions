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
	vector<int> b(n), c(n);
	for (auto &i : b) cin >> i;

	for (int i = 0; i < n; i++)
		c[i] = a[i] - b[i];
	sort(c.begin(), c.end());
	int p = 0;
	for (int i = 0; i < n; i++) {
		if (c[i] <= 0) {
			// cout << '@' << endl;
			continue;
		}
		int posn = lower_bound(c.begin(), c.end(), 1 - c[i]) - c.begin();
		// cout << posn << endl;
		p += i - posn;
	}

	cout << p << endl;
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