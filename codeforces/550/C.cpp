#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	string s;
	cin >> s;
	int n = s.length();
	for (int i = 0; i < n; i++) {
		int sum = (s[i] - '0') * 100;
		for (int j = i + 1; j < n; j++) {
			sum += (s[j] - '0') * 10;
			for (int k = j + 1; k < n; k++) {
				sum += (s[k] - '0');
				if (sum % 8 == 0) {
					cout << "YES";
					cout << endl << sum;
					return;
				}
				sum -= (s[k] - '0');
			}
			if ((sum / 10) % 8 == 0) {
				cout << "YES";
				cout << endl << sum / 10;
				return;
			}
			sum -= (s[j] - '0') * 10;
		}
		if ((sum / 100) % 8 == 0) {
			cout << "YES";
			cout << endl << sum / 100;
			return;
		}
		sum -= (s[i] - '0') * 100;
	}

	cout << "NO";
}

int32_t main()
{
	aashish_999;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int testcases = 1;
	//cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}