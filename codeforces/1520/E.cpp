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

	vector<int> pos;
	int in = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '*')
			pos.push_back(i);
	}
	int mn = 0;
	int center = (pos.size() + 1) / 2 - 1;
	for (int i = 0; i < pos.size(); i++) {
		mn += abs(pos[center] - pos[i]) - abs(center - i);
	}
	cout << mn << endl;
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