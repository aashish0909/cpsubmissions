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
	int j = 1;
	//1,000 1,000,000
	for (int i = 1000; i <= min((int)1e15, n); i *= 1000) {
		cnt += j * (min(n, i * 1000 - 1) - i + 1);
		++j;
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