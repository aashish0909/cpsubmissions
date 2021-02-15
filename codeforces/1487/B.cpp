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

	int n, k;
	cin >> n >> k;
	if (n % 2 == 0) {
		k = k % n;
		if (k == 0) k = n;

		cout << k << endl;
		return;
	}

	int cycle = n / 2;
	cycle *= n;

	k = k % cycle;
	if (k == 0) k = cycle;
	int m = n / 2;
	int add = k / m;
	if (k % m == 0) --add;
	int pos = k % n;
	if (pos == 0) pos = n;
	pos += add;
	pos = pos % n;
	if (pos == 0) pos = n;
	cout << pos << endl;

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