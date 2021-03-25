#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	string s1, s2;
	cin >> s1 >> s2;
	// bool f = true;
	int chances = 0, cnt1p = 0, cnt1n = 0, cnt2p = 0, cnt2n = 0;
	int n = s1.length();
	double ans = 0;
	for (int i = 0; i < n; i++) {
		if (s1[i] == '+')
			++cnt1p;
		else ++cnt1n;
		if (s2[i] == '?')
			++chances;
		else if ('-' == s2[i])
			++cnt2n;
		else ++cnt2p;
	}

	if (cnt1p < cnt2p || cnt1n < cnt2n) {
		ans = 0;
		// cout << -1;
	}
	else {
		int reqp = cnt1p - cnt2p;
		int reqn = cnt1n - cnt2n;

		int total = reqp + reqn;
		int fact[total + 1];
		fact[0] = fact[1] = 1;
		for (int i = 2; i <= total; i++)
			fact[i] = fact[i - 1] * i;
		int choose = (double)fact[total] / (fact[total - reqp] * fact[reqp]);
		ans = (double)choose / (int)pow(2, chances);
	}

	cout << fixed << setprecision(13) << ans;
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