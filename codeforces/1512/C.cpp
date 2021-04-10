#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int a, b;
	cin >> a >> b;
	string s;
	cin >> s;
	int n = s.length();
	// if (n % 2 == 0 && (a % 2 != 0 || b % 2 != 0)) {
	// 	cout << -1 << endl;
	// 	return;
	// }
	int zero = a, one = b;

	for (int i = 0; i < n; i++) {
		if (s[i] == '0')
			--a;
		if (s[i] == '1')
			--b;
	}
	for (int i = 0; i < n; i++) {
		if (s[i] != '?' && s[n - i - 1] == '?')
		{
			s[n - i - 1] = s[i];
			if (s[i] == '0')
				--a;
			else --b;
		}
	}
	for (int i = 0; i < n; i++) {
		if (s[i] == '?') {
			if (s[n - i - 1] == '?') {
				if (a > b) {
					s[i] = s[n - i - 1] = '0';
					a -= 2;
				}
				else {
					s[i] = s[n - i - 1] = '1';
					b -= 2;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (s[i] != s[n - i - 1]) {
			cout << -1 << endl;
			return;
		}
		if (s[i] == '1')
			--one;
		else --zero;
	}
	// cout << s << endl;
	if (one != 0 || zero != 0)
		cout << -1 << endl;
	else
		cout << s << endl;
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