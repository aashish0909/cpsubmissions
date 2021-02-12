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

	int a, b;
	cin >> a >> b;
	int diff = abs(a - b);
	int rem = diff / 2;
	diff -= rem;
	int sum = 0;
	for (int i = 1; rem > 0; i++, rem--)
		sum += i;
	for (int i = 1; diff > 0; i++, diff--)
		sum += i;

	cout << sum;
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