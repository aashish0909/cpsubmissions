#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

const int N = 4e5 + 1, mod = 1e9 + 7;
int two[N];

vector<int> adj[N], visited(N);

void dfs(int node) {
	visited[node] = 1;
	for (auto child : adj[node])
		if (!visited[child])
			dfs(child);
}

void solve()
{
	//read the question properly

	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (auto &i : a) cin >> i;
	for (auto &i : b) cin >> i;
	for (int i = 0; i <= n; i++)
		adj[i].clear(), visited[i] = 0;

	for (int i = 0; i < n; i++) {
		adj[a[i]].push_back(b[i]);
		adj[b[i]].push_back(a[i]);
	}

	int connected = 0;
	for (int i = 1; i <= n; i++) {
		if (!visited[i])
			connected++, dfs(i);
	}
	// cout << connected << endl;
	cout << two[connected] << endl;
}

int32_t main()
{
	aashish_999;
	two[0] = 1;

	for (int i = 1; i <= N; i++)
		two[i] = (2 * two[i - 1]) % mod;

	int testcases = 1;
	cin >> testcases;
	while (testcases--)
	{
		solve();
	}
}