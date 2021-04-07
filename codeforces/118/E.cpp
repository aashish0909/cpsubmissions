#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<int> adj[100001], visited(100001, 0), low(100001, 0), in(100001, 0);
int timer = 0;
vector<pair<int, int>> ans;
bool f = true;
void dfs(int node, int par) {
	visited[node] = 1;
	low[node] = in[node] = timer++;
	for (auto child : adj[node]) {
		if (child == par)
			continue;
		if (visited[child]) {
			low[node] = min(low[node], in[child]);
			if (in[child] < in[node])
				ans.push_back({node, child});
		}
		else {
			dfs(child, node);
			if (low[child] > in[node]) {
				f = false;
				return;
			}

			ans.push_back({node, child});
			low[node] = min(low[node], low[child]);
		}
	}
}

void solve()
{
	//read the question properly

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfs(1, -1);

	if (f) {
		for (auto [k, v] : ans)
			cout << k << " " << v << endl;
	}
	else cout << 0;
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