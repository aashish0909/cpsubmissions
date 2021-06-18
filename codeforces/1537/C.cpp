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
	for (auto &i : a) cin >> i;

	sort(a.begin(), a.end());
	int st = a[1] - a[0];
	int en = a[n - 1] - a[n - 2];
	int mn = min(st, en);
	bool f = false;
	int it;
	for (int i = 1; i < n - 1; i++) {
		if (a[i + 1] - a[i] < mn) {
			mn = a[i + 1] - a[i];
			f = true;
			it = i;
		}
	}

	vector<int> ans;
	if (f) {
		ans.push_back(a[it]);
		for (int i = it + 2; i < n; i++)
			ans.push_back(a[i]);
		for (int i = 0; i < it; i++)
			ans.push_back(a[i]);
		ans.push_back(a[it + 1]);
	}
	else {
		if (st < en) {
			ans.push_back(a[0]);
			for (int i = 2; i < n; i++)
				ans.push_back(a[i]);
			ans.push_back(a[1]);
		}
		else {
			ans.push_back(a[n - 2]);
			for (int i = 0; i < n - 2; i++)
				ans.push_back(a[i]);
			ans.push_back(a[n - 1]);
		}
	}

	for (auto i : ans) cout << i << ' ';
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