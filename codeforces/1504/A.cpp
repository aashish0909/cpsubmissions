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
	string ans = "";
	bool f = true;
	for (int i = 0; i < n; i++) {
		if (s[n - i - 1] != 'a' && f) {
			ans += 'a';
			f = false;
		}
		ans += s[i];
	}

	if (f) {
		cout << "NO" << endl;
	}
	else cout << "YES" << endl << ans << endl;
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