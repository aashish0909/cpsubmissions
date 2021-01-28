#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	int n;
	cin >> n;
	int k;
	cin >> k;
	while (k--) {
		if (n % 10 == 0)
			n /= 10;
		else
			n -= 1;
	}

	cout << n;
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