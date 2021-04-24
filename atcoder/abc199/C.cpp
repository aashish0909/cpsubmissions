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
	string s;
	cin >> s;
	string first = "", last = "";
	for (int i = 0; i < n; i++)
		first += s[i];
	for (int i = n; i < 2 * n; i++)
		last += s[i];

	// cout << first << " " << last << endl;
	int q;
	cin >> q;
	bool flag = false;
	while (q--) {
		int t, a, b;
		cin >> t >> a >> b;
		if (t == 2) {
			flag = !flag;
			swap(first, last);
			// cout << first << last << endl;
			continue;
		}
		if (a <= n && b <= n) {
			swap(first[a - 1], first[b - 1]);
		}
		else if (a <= n && b > n) {
			swap(first[a - 1], last[b - n - 1]);
		}
		else if (a > n && b <= n) {
			swap(last[a - n - 1], first[b - 1]);
		}
		else {
			swap(last[a - n - 1], last[b - n - 1]);
		}
	}

	cout << first << last;
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