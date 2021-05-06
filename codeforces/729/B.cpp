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
	int a[n][m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];

	int cnt = 0;
	int lights = 0;

	for (int i = 0; i < n; i++) {
		lights = 0;
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 1)
				++lights;
			else
			{
				if (lights > 0) {
					// cout << i << " " << j << endl;
					++cnt;
				}
				// lights = 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		lights = 0;
		for (int j = m - 1; j >= 0; j--) {
			if (a[i][j] == 1)
				++lights;
			else
			{
				if (lights > 0) {
					// cout << i << " " << j << endl;
					++cnt;
				}
				// lights = 0;
			}
		}
	}
	for (int j = 0; j < m; j++) {
		lights = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (a[i][j] == 1)
				++lights;
			else
			{
				if (lights > 0) {
					// cout << i << " " << j << endl;
					++cnt;
				}
				// lights = 0;
			}
		}
	}
	for (int j = 0; j < m; j++) {
		lights = 0;
		for (int i = 0; i < n; i++) {
			if (a[i][j] == 1)
				++lights;
			else
			{
				if (lights > 0) {
					// cout << i << " " << j << endl;
					++cnt;
				}
				// lights = 0;
			}
		}
	}

	cout << cnt << endl;
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