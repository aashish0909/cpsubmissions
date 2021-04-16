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
	vector<int> a(n), odd, even;
	for (auto &i : a)
	{
		cin >> i;
		if (i & 1)
			odd.push_back(i);
		else even.push_back(i);
	}

	for (auto i : odd) cout << i << " ";
	for (auto i : even)
		cout << i << " ";
	cout << endl;
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