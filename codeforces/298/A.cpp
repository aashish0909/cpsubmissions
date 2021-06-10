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

	string s;
	cin >> s;

	int r = 0, l = 0;
	for (auto i : s)
		if (i == 'R')
			++r;
		else if (i == 'L')
			++l;


	if (r == 0 || l == 0) {
		if (l == 0) {
			int st, en;
			for (int i = 0; i < n; i++)
				if (s[i] == 'R') {
					st = i + 1;
					break;
				}
			for (int i = n - 1; i >= 0; i--)
				if (s[i] == 'R') {
					en = i + 1;
					break;
				}

			cout << st << ' ' << en + 1 << endl;
		}
		else {
			int st, en;
			for (int i = 0; i < n; i++)
				if (s[i] == 'L') {
					en = i;
					break;
				}
			for (int i = n - 1; i >= 0; i--)
				if (s[i] == 'L') {
					st = i + 1;
					break;
				}

			cout << st << ' ' << en << endl;
		}
	}
	else {
		int st, en;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'R') {
				st = i + 1;
				break;
			}
		}

		for (int i = n - 1; i >= 0; i--) {
			if (s[i] == 'R') {
				en = i + 1;
				break;
			}
		}

		cout << st << " " << en << endl;
	}
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