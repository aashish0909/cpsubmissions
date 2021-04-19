#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

int power(int x, int y, int p)
{
	int res = 1;

	x = x % p;

	if (x == 0) return 0;

	while (y > 0)
	{
		if (y & 1)
			res = (res * x) % p;

		x = (x * x) % p;
		y /= 2;
	}
	return res;
}

void solve()
{
	//read the question properly
	int n, k;
	cin >> n >> k;
	int p = 1e9 + 7;
	int ans = power(n, k, p);
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