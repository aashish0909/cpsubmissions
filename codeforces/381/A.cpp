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
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int s = 0, d = 0;
	int left = 0, right = n - 1;
	int move = 0;
	while (left <= right && move < n) {
		int mx;
		if (a[left] > a[right])
			mx = a[left], ++left;
		else mx = a[right], --right;
		if (move & 1) d += mx;
		else s += mx;
		++move;
	}

	cout << s << " " << d;
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