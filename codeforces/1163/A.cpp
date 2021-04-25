#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n, k;
	cin >> n >> k;
	int half = n / 2;
	if (k == 0) {
		cout << 1;
		return;
	}
	if (k <= half)
		cout << k;
	else
		cout << n - k;
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