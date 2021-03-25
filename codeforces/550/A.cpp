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
	bool f = false;
	int posn;
	int n = s.length();
	for (int i = 0; i < n - 1; i++) {
		if (s.substr(i, 2) == "AB") {
			posn = i;
			f = true;
			break;
		}
	}
	if (!f) {
		cout << "NO";
		return;
	}
	// cout << posn << endl;
	for (int i = posn + 2; i < n - 1; i++) {
		if (s.substr(i, 2) == "BA") {
			cout << "YES";
			return;
		}
	}
	f = false;
	posn = 0;
	for (int i = 0; i < n - 1; i++) {
		if (s.substr(i, 2) == "BA") {
			posn = i;
			f = true;
			break;
		}
	}
	if (!f) {
		cout << "NO";
		return;
	}
	for (int i = posn + 2; i < n - 1; i++) {
		if (s.substr(i, 2) == "AB") {
			cout << "YES";
			return;
		}
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