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
	if(n==0)
		cout<<1;
	else if (n % 4 == 0)
		cout << 6;
	else if (n % 4 == 1)
		cout << 8;
	else if (n % 4 == 2)
		cout << 4;
	else cout << 2;
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