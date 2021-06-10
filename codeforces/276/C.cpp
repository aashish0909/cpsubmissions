#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	int n, q;
	cin >> n >> q;
	vector<int> a(n);
	for (auto &i : a) cin >> i;

	map<int, int> queries;
	vector<pair<int, int>> query;
	for (int i = 0; i < q; i++)
	{
		int l, r;
		cin >> l >> r;
		query.push_back({l, r});
		queries[l]++;
		queries[r + 1]--;
	}
	map<int, int> cnt;
	int count = 0;
	for (int i = 1; i <= n; i++) {
		count += queries[i];
		cnt[i] = count;
	}


	sort(a.begin(), a.end());
	int it = n - 1;
	vector<pair<int, int>> order(n);
	vector<int> ans(n);
	for (int i = 0; i < n; i++) {
		order[i].first = cnt[i + 1];
		order[i].second = i;
	}
	sort(order.begin(), order.end());
	for (int i = n - 1; i >= 0; i--) {
		ans[order[i].second] = a[it];
		--it;
	}

	int sum = 0;

	int pre[n + 1];
	memset(pre, 0, sizeof pre);
	pre[0] = 0;
	for (int i = 0; i < n; i++) {
		pre[i + 1] = pre[i] + ans[i];
	}

	for (int i = 0; i < q; i++) {
		sum += pre[query[i].second] - pre[query[i].first - 1];
		// cout << pre[query[i].second] - pre[query[i].first - 1] << " ";
	}

	cout << sum << endl;
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