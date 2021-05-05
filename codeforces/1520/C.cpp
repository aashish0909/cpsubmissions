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
	bool flag = true;
	int a[n][n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = -1;
	int st = 1, en = (n * n);
	en = (en + 1) / 2;
	++en;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (flag)
				a[i][j] = st++;
			else a[i][j] = en++;
			flag = !flag;
		}
	}
	bool possible = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j > 0 && abs(a[i][j] - a[i][j - 1]) == 1)
				possible = false;
			if (i > 0 && abs(a[i][j] - a[i - 1][j]) == 1)
				possible = false;
			if (j < n - 1 && abs(a[i][j] - a[i][j + 1]) == 1)
				possible = false;
			if (i < n - 1 && abs(a[i][j] - a[i + 1][j]) == 1)
				possible = false;
		}
	}

	if (possible)
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cout << a[i][j] << " ";
			cout << endl;
		}
	else cout << -1 << endl;
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