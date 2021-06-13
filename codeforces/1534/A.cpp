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
	char a[n][m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];

	int fr = -1, fc = -1;
	char f = ' ';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != '.') {
				fr = i, fc = j;
				f = a[i][j];
				break;
			}
		}
		if (f != ' ')
			break;
	}

	// cout << fr << " " << fc << " " << f << endl;

	char r = f;
	if (f == ' ') {
		f = 'R';
	}
	else if ((fr + fc) % 2 == 0)
	{
		if (f == 'R')
			f = 'W';
		else f = 'R';
	}

	bool possible = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (f == 'R')
				f = 'W';
			else f = 'R';
			if (i > 0 && j == 0)
			{
				if (a[i - 1][j] == 'R')
					f = 'W';
				else f = 'R';
			}
			if (a[i][j] != '.')
				continue;
			a[i][j] = f;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j < m - 1 && a[i][j] == a[i][j + 1])
				possible = false;
			if (j > 0 && a[i][j] == a[i][j - 1])
				possible = false;
			if (i > 0 && a[i][j] == a[i - 1][j])
				possible = false;
			if (i < n - 1 && a[i][j] == a[i + 1][j])
				possible = false;
		}
	}

	if (possible) {
		cout << "YES" << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << a[i][j];
			}
			cout << endl;
		}
	}
	else
		cout << "NO" << endl;

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