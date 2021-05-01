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
	s += "";
	string comp = "ZONe";
	int ans = 0;
	for (int i = 0; i < s.length() - 3; i++) {
		string a = "";
		for (int j = i; j < i + 4; j++)
			a += s[j];
		if (a == comp) {
			// cout << a;
			++ans;
		}
	}

	cout << ans;
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