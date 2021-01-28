#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	int n;
	cin >> n;
	int cnt = 0;
	while (n > 0) {
		if (n % 10 == 4 || n % 10 == 7)
			++cnt;
		n /= 10;
	}

	bool flag = false;
	if (cnt == 4 || cnt == 7)
		flag = true;

	cout << (flag ? "YES" : "NO");
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