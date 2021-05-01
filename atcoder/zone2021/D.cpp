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
	string f, r;
	f = r = "";

	bool flag = false;
	int cnt = 0;

	for (auto i : s) {
		if (i == 'R')
			flag = !flag, ++cnt;
		else if (flag)
			r += i;
		else
			f += i;
	}

	string final;
	if (cnt % 2 == 0)
		reverse(r.begin(), r.end()), final = r + f;
	else reverse(f.begin(), f.end()), final = f + r;
	string ans = "";
	for (int i = 0; i < final.length(); i++) {
		if (ans.empty()) {
			ans += final[i];
			continue;
		}
		if (ans.back() == final[i]) {
			ans.pop_back();
		}
		else ans.push_back(final[i]);
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