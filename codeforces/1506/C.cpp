#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	string a, b;
	cin >> a >> b;
	int n = a.length();
	int m = b.length();

	for (int len1 = n; len1 >= 0; len1--) {

		for (int i = 0; i < n - len1 + 1; i++) {

			string k = a.substr(i, len1);

			if (b.find(k) != string::npos) {

				int found = b.find(k);
				int end = found + len1;
				int aend = i + len1;
				// cout << i << " " << len1 << " " << found << " " << end << endl;
				int ans = i + n - aend + m - end + found;
				cout << ans << endl;
				return;

			}
		}
	}
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