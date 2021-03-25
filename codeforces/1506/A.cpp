#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int n, m, k;
	cin >> n >> m >> k;
	int row = k % n, col = 0;
	if (row == 0)
		row = n;

	int st = 1;
	int en = m;

	while (st <= en) {
		int mid = (st + en) / 2;
		// cout << mid << endl;
		if (row + (mid - 1)*n < k)
			st = mid + 1;
		else if (row + (mid - 1)*n == k) {
			col = mid;
			break;
		}
		else
			en = mid - 1;
	}

	cout << (row - 1)*m + col << endl;

}

int32_t main()
{
	aashish_999;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int testcases = 1;
	cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}