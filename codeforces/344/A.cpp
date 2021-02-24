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

	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	int grps = 1;
	for (int i = 1; i < n; i++) {
		if (s[i][0] == s[i - 1][1])
			++grps;
	}

	cout << grps;
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