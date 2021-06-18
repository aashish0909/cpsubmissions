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
	vector<int> a(n);
	map<int, int> pos, posr;
	int st = 1, en = n;
	for (auto &i : a) cin >> i, pos[i] = st++, posr[i] = en--;
	int q;
	cin >> q;
	int petya = 0, vasya = 0;
	for (int i = 0; i < q; i++) {
		int x;
		cin >> x;
		petya += posr[x];;
		vasya += pos[x];
	}

	cout << vasya << " " << petya << endl;
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