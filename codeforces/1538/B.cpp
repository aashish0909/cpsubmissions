#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n;
	cin >> n;
	vector<int> a(n);
	int sum = 0;
	for (auto &i : a) {
		cin >> i;
		sum += i;
	}

	if (sum % n != 0) {
		cout << -1 << endl;
		return;
	}


	sort(a.begin(), a.end());
	int each = sum / n;

	if (a[0] == a[n - 1]) {
		cout << 0 << endl;
		return;
	}

	int cnt = 0;
	for (auto i : a) {
		if (i > each)
			++cnt;
	}


	cout << cnt << endl;
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