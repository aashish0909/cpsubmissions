#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int n;
	cin >> n;
	vector<int> c(n + 1);
	for (auto i = 0; i < n; i++)
		cin >> c[i + 1];
	int ans = 1e18;
	int evenmin = 1e18;
	int oddmin = c[1];
	int sumev = 0;
	int sumodd = c[1];
	int cntodd = 1, cnteven = 0;
	for (int i = 2; i <= n; i++) {
		if (i % 2)
			oddmin = min(oddmin, c[i]), sumodd += c[i], cntodd++;
		else
			evenmin = min(evenmin, c[i]), sumev += c[i], cnteven++;

		int sum = sumodd + (n - cntodd) * oddmin + sumev + (n - cnteven) * evenmin;
		ans = min(sum, ans);
	}
	cout << ans << endl;
}
int32_t main()
{
	aashish_999;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int testcases = 1;
	cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}