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
	int st = 1;
	while (n--) {
		if (st * 2 <= st + k)
			st *= 2;
		else st += k;
		// cout << st << endl;
	}

	cout << st;
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