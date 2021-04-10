#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	int n;
	cin >> n;
	int a[n];
	map<int, int> cnt;
	for (int i = 0; i < n; i++)
		cin >> a[i], cnt[a[i]]++;
	for (int i = 0; i < n; i++) {
		if (cnt[a[i]] == 1) {
			cout << i + 1 << endl;
			return;
		}
	}
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