#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

void solve()
{
	//read the question properly
	int a, b, c;
	cin >> a >> b >> c;
	int costofb = a * b;
	if (a < c)
		cout << 1 << " ";
	else cout << -1 << " ";
	if (costofb > c)
		cout << b << endl;
	else cout << -1 << endl;
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