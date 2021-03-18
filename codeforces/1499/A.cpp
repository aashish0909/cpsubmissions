#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int n, k1, k2;
	cin >> n >> k1 >> k2;
	int w, b;
	cin >> w >> b;
	int a[2][n];
	set<pair<int, int>> disw, disb;
	for (int j = 0; j < k1; j++)
		disw.insert({0, j});
	for (int j = k1; j < n; j++)
		disb.insert({0, j});
	for (int j = 0; j < k2; j++)
		disw.insert({1, j});
	for (int j = k2; j < n; j++)
		disb.insert({1, j});


	if (disw.size() / 2 >= w && disb.size() / 2 >= b)
		cout << "YES" << endl;
	else cout << "NO" << endl;
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