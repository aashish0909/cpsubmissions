#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int r, x, y;
	cin >> r >> x >> y;
	double dist = sqrt(x * x + y * y);
	if (dist == r)
		cout << 1;
	else if (dist <= 2 * r)
		cout << 2;
	else
		cout << ceil(dist / r);
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