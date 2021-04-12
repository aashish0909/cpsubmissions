#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

map<int, int> cnt;
vector<int> c, ans;
vector<int> adj[100001];
void dfs(int node, int par) {
	if (cnt[c[node - 1]] == 0)
		ans.push_back(node);
	++cnt[c[node - 1]];
	for (auto child : adj[node]) {
		if (child == par)
			continue;
		dfs(child, node);
	}
	--cnt[c[node - 1]];
}

void solve()
{
	//read the question properly
	int n;
	cin >> n;
	c.resize(n);
	for (auto &i : c)
		cin >> i;
	for (int i = 0; i < n - 1; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	dfs(1, -1);

	sort(ans.begin(), ans.end());
	for (auto i : ans)
		cout << i << endl;
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