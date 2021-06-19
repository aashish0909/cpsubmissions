#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

const int N = 2 * 1e5 + 1;
vector<int> adj[N], visited(N, 0);
set<int> dis;

void dfs(int node) {
	dis.insert(node);
	visited[node] = 1;
	for (auto child : adj[node]) {
		if (!visited[child])
			dfs(child);
	}
}

void solve()
{
	//read the question properly

	int n;
	cin >> n;
	vector<int> a(n);
	for (auto &i : a) cin >> i;
	for (int i = 0; i < n; i++) {
		adj[a[i]].push_back(a[n - i - 1]);
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (!visited[a[i]]) {
			dis.clear();
			dfs(a[i]);
			ans += dis.size() - 1;
		}
	}

	cout << ans << endl;
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