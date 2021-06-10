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
	vector<int> a(n);
	for (auto &i : a) cin >> i;

	int res = 0;

	for (int i = 0; i < n; i++) {
		int temp = a[i];
		res = max(res, temp);
		for (int j = i + 1; j < n; j++) {
			temp ^= a[j];
			res = max(res, temp);
		}
	}


	cout << res << endl;
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