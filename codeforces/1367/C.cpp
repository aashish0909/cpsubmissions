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
	string s;
	cin >> s;
	int cnt = 0;
	int lastpos = -k - 1;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			if (i - lastpos > k) {
				++cnt;
				s[i] = '1';
				lastpos = i;
			}
		}
		else {
			if (i - lastpos <= k) {
				--cnt;
				s[i] = '0';
			}
			lastpos = i;
		}
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