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
	vector<int> a(n + 2);
	multiset<int> dis;
	for (auto &i : a)
		cin >> i, dis.insert(i);
	sort(a.begin(), a.end());
	int sum = a[n + 1];
	auto it = dis.find(sum);
	dis.erase(it);
	int prefsum = 0;
	for (int i = 0; i < n + 1; i++)
		prefsum += a[i];
	int diff = prefsum - sum;
	if (dis.find(diff) != dis.end()) {
		it = dis.find(diff);
		dis.erase(it);
		for (auto i : dis)
			cout << i << " ";
	}
	else {
		dis.insert(sum);
		it = dis.find(sum);
		dis.erase(it);
		sum = a[n];
		prefsum -= sum;

		if (prefsum == sum) {
			it = dis.find(sum);
			dis.erase(it);
			for (auto i : dis)
				cout << i << " ";
		}
		else cout << -1;
	}
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