#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '*') {
			s[i] = 'x';
			++cnt;
			for (int j = min(n - 1, i + k); j >= i; j--) {
				if (s[j] == '*') {
					i = j - 1;
					break;
				}
			}
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == '*') {
			cout << cnt + 1 << endl;
			return;
		}
		else if (s[i] == 'x')
		{
			cout << cnt << endl;
			return;
		}
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