#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	int n;
	cin >> n;
	int sum = 0, mx = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		sum -= a;
		sum += b;
		mx = max(sum, mx);
	}

	cout << mx;
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