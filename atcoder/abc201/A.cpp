#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	vector<int> a(3);
	for (auto &i : a) cin >> i;
	sort(a.begin(), a.end());
	if (a[2] - a[1] == a[1] - a[0])
		cout << "Yes";
	else cout << "No";
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