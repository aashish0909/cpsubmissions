#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

int cnt(int s)
{
	int ans = 0;
	long double a = 0.0;
	for (int i = 1; abs(a) <= s * 1.0; i++) {
		a = (1.0 * s - (i * (i - 1) / 2)) / i;
		if (a - (int)a == 0.0)
			++ans;
		if (abs(a) == s - 1)
			break;
	}

	return ans;
}

void solve()
{
	int sum;
	cin >> sum;
	int ans = 1;
	map<int, int> cnt;
	for (int i = 2; i * i <= sum && sum > 1; i++) {
		while (sum % i == 0)
			++cnt[i], sum /= i;
	}
	if (sum > 2)
		++cnt[sum];
	for (auto [key, val] : cnt) {
		if (key & 1)
			ans *= (val + 1);
	}
	cout << ans * 2;
}

int32_t main()
{
	aashish_999;

	int testcases = 1;
	// cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}