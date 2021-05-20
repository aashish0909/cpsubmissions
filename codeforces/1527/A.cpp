#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define aashish_999 ios_base::sync_with_stdio(false);cin.tie(NULL)

int invertBits(int n)
{
	// Calculate number of bits of N-1;
	int x = log2(n) ;

	int m = 1 << x;

	m = m | m - 1;

	n = n ^ m;

	return n;
}

void solve()
{
	//read the question properly
	int n;
	cin >> n;
	int cnt = n;
	cnt /= 2;
	for (int i = 0; (1 << i) <= cnt; i++)
		cnt |= (1 << i);
	cout << cnt << endl;
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