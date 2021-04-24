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
	vector<int> a(n), b(n);
	for (auto &i : a) cin >> i;
	for (auto &i : b) cin >> i;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	set<int> s;
	for (int j = a[n - 1]; j <= b[0]; j++)
		s.insert(j);

	cout << s.size();
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