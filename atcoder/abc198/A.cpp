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
	if (n < 2) {
		cout << 0 << endl;
		return;
	}
	set<pair<int, int>> ans;
	for (int i = 1; i < n; i++) {
		ans.insert({i, n - i});
		ans.insert({n - i, i});
	}

	cout << ans.size();
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