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
	if (k == 0) {
		for (int i = 1; i <= n; i++)
			cout << i << " ";
		cout << endl;
		return;
	}
	int half = (n + 1) / 2;

	if (half - 1 < k) {
		cout << -1 << endl;
		return;
	}

	int st = 1, en = n;
	bool flag = true;
	while (k > 0 && st < en) {
		cout << st << " " << en << " ";
		++st, --en;
		flag = !flag;
		--k;
	}
	for (int i = st; i <= en; i++)
		cout << i << " ";
	cout << endl;
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