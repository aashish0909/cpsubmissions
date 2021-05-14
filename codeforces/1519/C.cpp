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
	vector<int> us[n];
	vector<int> a(n), s(n);
	for (auto &i : a) cin >> i;
	for (int i = 0; i < n; i++)	a[i]--;
	for (auto &i : s) cin >> i;
	for (int i = 0; i < n; i++)
		us[a[i]].push_back(s[i]);
	for (auto &i : us)
		sort(i.begin(), i.end(), greater<int> {});
	int score = 0;
	vector<vector<int>> pre(n, vector<int>(1, 0));
	for (int i = 0; i < n; i++) {
		for (auto j : us[i])
			pre[i].push_back((int)pre[i].back() + j);
	}

	vector<int> ans(n);
	for (int i = 0; i < n; i++) {
		for (int k = 1; k <= us[i].size(); k++)
			ans[k - 1] += pre[i][us[i].size() / k * k];
	}

	for (auto i : ans)
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