#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

int sum(int n) {
	int s = 0;
	while (n > 0)
		s += n % 10, n /= 10;
	return s;
}

void solve()
{
	//read the question properly
	int n;
	cin >> n;

	while (__gcd(sum(n), n) <= 1) {
		++n;
	}

	cout << n << endl;
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