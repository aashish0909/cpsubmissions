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
	while (k--) {
		if (n % 200 == 0)
			n /= 200;
		else {
			n *= 1000;
			n += 200;
		}
	}

	cout << n;
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