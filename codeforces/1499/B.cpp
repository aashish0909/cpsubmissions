#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly

	string s;
	cin >> s;

	int n = s.length();

	for (int i = 0; i < n; i++) {
		bool f = true	;
		vector<int> pos;
		for (int j = 0; j < i; j++)
			if (s[j] == '1')
				pos.push_back(j);
		for (int j = i; j < n; j++)
			if (s[j] == '0')
				pos.push_back(j);
		for (int j = 1; j < pos.size(); j++)
			if (pos[j] - 1 == pos[j - 1])
				f = false;
		if (f)
		{
			cout << "YES" << endl;
			return;
		}
	}

	cout << "NO" << endl;
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