#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

const int N = 1e6 + 1;

void solve()
{
	//read the question properly
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (auto &i : a)
		cin >> i;
	vector<int> b(N);
	int queries = 0;
	vector<int> type(N), r(N);
	for (int i = 0; i < m; i++) {
		int t, ri;
		cin >> t >> ri;

		while (queries > 0 && r[queries - 1] <= ri)
			--queries;

		type[queries] = t;
		r[queries] = ri;
		++queries;
	}

	int left = 0, right = r[0];
	r[queries] = 0;
	++queries;

	sort(a.begin(), a.begin() + right);
	for (int i = 0; i < right; i++)
		b[i] = a[i];

	for (int i = 1; i < queries; i++) {
		for (int j = r[i - 1]; j > r[i]; j--) {
			a[j - 1] = (type[i - 1] == 1 ? b[--right] : b[left++]);
		}
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
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