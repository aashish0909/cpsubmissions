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
	int n = s.size();
	int it = n - 1;
	string ans = "";
	while (it >= 0 && s[it] == '0')
		ans += '0', it--;
	ans += s;
	// cout << ans;
	for (int i = 0; i < ans.size(); i++) {
		if (ans[i] != ans[ans.size() - i - 1]) {
			cout << "No";
			return;
		}
	}
	cout << "Yes";
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