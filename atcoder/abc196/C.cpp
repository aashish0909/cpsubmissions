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

	int cnt = 0;

	int st = 1;
	int q = 0;
	int k = 1;
	while (q <= n) {
		int ten = 1;
		for (int i = 1; i <= k; i++)
			ten *= 10;
		q = (ten * st) + st;
		// cout << q << " " << st << " " << k << endl;
		if (q <= n)
			++cnt;
		++st;
		if (st == (int)(pow(10, k)))
			k++;
	}

	cout << cnt;
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