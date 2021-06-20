#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n, x, t;
	cin >> n >> x >> t;
	int l = min(n - 1, t / x);
	if (l == 0)
		cout << 0 << endl;
	else {
		int sum = max(0ll, l * (l - 1) / 2) + l * (n - l);
		cout << sum << endl;
	}
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