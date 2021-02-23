#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	// Understand the problem.
	// Devise a plan.
	// Carry out the plan.
	// Look back.

	int p, a, b, c;
	cin >> p >> a >> b >> c;

	int m1 = (p + a - 1) / a;
	int m2 = (p + b - 1) / b;
	int m3 = (p + c - 1) / c;

	int n1 = m1 * a;
	int n2 = m2 * b;
	int n3 = m3 * c;

	int ans = min({n1 - p, n2 - p, n3 - p});

	cout << ans << endl;
}

int32_t main()
{
	aashish_999;

	int testcases = 1;
	cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}