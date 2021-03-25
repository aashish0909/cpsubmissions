#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

int lcm(int a, int b) {
	return (a * b) / __gcd(a, b);
}

void solve()
{
	//read the question properly
	int x;
	cin >> x;
	int ans = x;
	for (int i = 1; i * i <= x; i++) {
		if (x % i == 0) {
			if (lcm(x / i, i) == x)
				ans = i;
		}
	}

	cout << ans << " " << x / ans;
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