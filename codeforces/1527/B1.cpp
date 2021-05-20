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
	int cnt = 0;
	for (auto i : s)
		if (i == '0')
			++cnt;

	int alice = 0, bob = 0;
	bool chance = true;
	if (cnt % 2 == 0)
		alice = 1, bob = 0;
	else {
		if (cnt == 1)
			alice = 1, bob = 0;
		else alice = 0, bob = 1;
	}

	if (alice > bob)
		cout << "BOB" << endl;
	else if (alice == bob)
		cout << "DRAW" << endl;
	else cout << "ALICE" << endl;
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