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

	vector<int> st(n);
	for (int i = 0; i < n; i++) {
		st[i] = a[i] - (i + 1);
	}

	while (q--) {
		int x;
		cin >> x;

		int posn = lower_bound(st.begin(), st.end(), x) - st.begin();
		// cout << '@' << posn << ' ';
		cout << x + posn << endl;
	}
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