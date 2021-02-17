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
	int k;
	cin >> k;

	if (k >= n)
		cout << 1 << endl;
	else {
		int cnt = n;
		for (int i = 2; i * i <= n && i <= k; i++) {
			if (n % i == 0) {
				cnt = min(cnt, n / i);
				if (n / i <= k)
					cnt = min(cnt, i);
			}
		}

		cout << cnt << endl;
	}
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