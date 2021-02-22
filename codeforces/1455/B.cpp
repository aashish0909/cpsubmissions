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

	int left = 1, right = 1e6;
	int s;
	while (left <= right) {
		int mid = (left + right) / 2;

		if (mid * (mid + 1) / 2 <= n)
			s = mid, left = mid + 1;
		else
			right = mid - 1;
	}

	if (s * (s + 1) / 2 < n)
		++s;

	if ((s * (s + 1) / 2) - n == 1)
		++s;

	cout << s << endl;
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