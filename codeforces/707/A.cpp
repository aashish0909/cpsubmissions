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
	// Look back

	int n, m;
	cin >> n >> m;
	char a[n][m];
	bool f = false;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			char x;
			cin >> x;
			if (x == 'B' || x == 'W' || x == 'G')
				continue;
			else f = true;
		}

	cout << (f ? "#Color" : "#Black&White");
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