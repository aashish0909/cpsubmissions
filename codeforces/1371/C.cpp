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

	int a, b, n, m;
	cin >> a >> b >> n >> m;
	if (a > b) swap(a, b);
	if (a + b < n + m)
		cout << "no" << endl;
	else if (m > a)
		cout << "NO" << endl;
	else cout << "yEs" << endl;
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