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
	// Understand the problem.
	// Devise a plan.
	// Carry out the plan.
	// Look back.

	int n, a, b;
	cin >> n >> a >> b;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		int s = sum(i);
		if (s >= a && s <= b)
			ans += i;
	}

	cout << ans;
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