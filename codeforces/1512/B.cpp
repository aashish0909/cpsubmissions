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
	char a[n][n];
	int x[2], y[2];
	int it = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			if (a[i][j] == '*') {
				x[it] = i;
				y[it] = j;
				it++;
			}
		}
	}

	if (x[0] != x[1] && y[0] != y[1]) {
		a[x[0]][y[1]] = '*';
		a[x[1]][y[0]] = '*';
	}
	else {
		if (x[0] == x[1]) {
			if (x[0] < n - 1) {
				a[x[0] + 1][y[0]] = '*';
				a[x[1] + 1][y[1]] = '*';
			}
			else {
				a[x[0] - 1][y[0]] = '*';
				a[x[1] - 1][y[1]] = '*';
			}
		}
		else {
			if (y[0] < n - 1) {
				a[x[0]][y[0] + 1] = '*';
				a[x[1]][y[1] + 1] = '*';
			}
			else {
				a[x[0]][y[0] - 1] = '*';
				a[x[1]][y[1] - 1] = '*';
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j];
		cout << endl;
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