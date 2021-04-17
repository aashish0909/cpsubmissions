#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<int> adj[100001], visited(100005), cats(100005);
set<int> pos;
int m;

void dfs(int node, int par, int k) {
	visited[node] = 1;
	bool flag = true;
	if (pos.find(node) != pos.end())
		++k;
	else k = 0;
	if (k > m)
		return;
	for (auto child : adj[node]) {
		if (!visited[child]) {
			if (child != par)
				flag = false;
			dfs(child, node, k);
		}
	}

	if (flag && k <= m)
		cats[node] = 1;
	--k;
}

void solve()
{
	//read the question properly
	int n;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == 1) pos.insert(i + 1);
	}

	for (int i = 0; i <= n; i++)
		visited[i] = 0, cats[i] = 0;


	for (int i = 1; i <= n - 1; i++)
	{
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	dfs(1, 0, 0);
	int cnt = 0;
	for (int i = 2; i <= n; i++)
		if (cats[i])
			cnt++;

	cout << cnt;
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