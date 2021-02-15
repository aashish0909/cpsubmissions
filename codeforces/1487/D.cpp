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
	int cnt = 0;
	for (int i = 3; ; i += 2)
		if ((i * i + 1) / 2 > n || i > n)
			break;
		else ++cnt;
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