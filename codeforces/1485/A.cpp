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
	int cnt = 1e18;
	for (int r = b; r <= b + 100; r++) {
		int t = a;
		if (r == 1) continue;
		int ans = r - b;
		while (t > 0) {
			++ans;
			t /= r;
		}

		cnt = min(ans, cnt);
	}

	cout << cnt << endl;
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