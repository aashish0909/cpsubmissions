#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for (auto &i : a)
		cin >> i;
	for (auto &i : b)
		cin >> i;
	sort(a.begin(), a.end());
	for (int i = 0; i < m; i++) {
		int find = b[i];
		int ele = upper_bound(a.begin(), a.end(), find) - a.begin();
		cout << ele << " ";
	}
}

int32_t main()
{
	aashish_999;

	int testcases = 1;
	// cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}