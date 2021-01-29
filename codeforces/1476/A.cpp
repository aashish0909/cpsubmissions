#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	int n, k; cin >> n >> k;
	if (k == 1) {
		cout << 1 << endl;
		return;
	}
	int ans;
	if (n > k) {
		int mul = ceil((double)n / k);
		k *= mul;
		ans = ceil((double)k / n);
	}
	else
		ans = ceil((double)k / n);

	cout << ans << endl;
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